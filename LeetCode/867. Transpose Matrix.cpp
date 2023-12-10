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

 vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> ans;
        for(int i=0; i<matrix[0].size(); i++){
            vector<int>tmp;
            for(int j=0; j<matrix.size(); j++){
                tmp.push_back(matrix[j][i]);
            }
            ans.push_back(tmp);
        }

        return ans;
    }

int main() {
#ifdef anikakash
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);  
   freopen("out.txt", "w", stdout);
#endif
  
    FASTERIO; 
    vector<vector<int>>v={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    vector<vector<int>> ans =  transpose(v);
    for(int i=0; i<ans.size(); i++){
            for(int j=0; j<ans[i].size(); j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }

#ifdef anikakash
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}