#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define MaxN                     1000000007 //1e5
#define EPS                      1e-18
#define dpoint(x)                fixed<<setprecision(x)
#define Fill(ar, weight)         memset(ar, weight, sizeof(ar))
typedef long long int            ll;
typedef double                   dl;
typedef unsigned long long int   ull;

bool isValidSudoku(vector<vector<char>>& board) {
    unordered_map<char,int>row;
    unordered_map<char,int>col;
    unordered_map<char,int>box;

    for(int i=0; i<9;i++){
        for(int j=0; j<9; j++){
            if(board[i][j]!='.'){
                row[board[i][j]]++;
            }
            if(board[j][i]!='.'){
                col[board[j][i]]++;
            }

            if(row[board[i][j]]>1) return false;
            if(col[board[j][i]]>1) return false;
        }
        row.clear(); col.clear();
    }

    for(int i=0; i<9; i+=3){
        for(int j=0; j<9; j+=3){
            box.clear();
            for(int x=i; x<i+3; x++){
                for(int y=j; y<j+3; y++){
                    if(board[x][y]!='.') box[board[x][y]]++;
                    if(box[board[x][y]]>1) return false;
                }
            }

        }
    }
    return true;
}

int main() {
#ifdef anikakash
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);  
   freopen("out.txt", "w", stdout);
#endif
  
    FASTERIO; 
     
     vector<string>v={
        {"011001"},
        {"000000"},
        {"010100"},
        {"001000"}
     };

    cout<<numberOfBeams(v)<<endl;


#ifdef anikakash
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}