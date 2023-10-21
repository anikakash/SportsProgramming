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


vector<vector<int>> setZeroes(vector<vector<int>>& matrix) {
 
        int cl0=1;
        int r = matrix.size(), c = matrix[0].size();
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(matrix[i][j]==0){
                        matrix[i][0]=0;
                        if(j!=0)matrix[0][j]=0;
                        else cl0=0;
                }
            }
        }

        for(int i=1; i<r; i++){
            for(int j=1; j<c; j++){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        if(matrix[0][0]==0){
          for(int j=0; j<c; j++){
            matrix[0][j]=0;
          }
          for(int i=0; i<r; i++){
            matrix[i][0]=0;
          }
        }
        if(cl0==0){
          for(int i=0; i<r; i++){
            matrix[i][0]=0;
          }
        }
        // for(int i=0; i<r; i++){
        //     for(int j=0; j<c; j++){
        //         cout<<matrix[i][j]<<" ";
        //     }
        //     cout<<"\n";
        //   }
        return matrix;
}

int main() {
#ifdef INSANE
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);  
   freopen("out.txt", "w", stdout);
#endif
  
    FASTERIO; // comment when use scanf and printf
    vector<vector<int>> matrix = {{0,1,1,0}, {3,4,5,2}, {1,3,1,5}};
    int n = matrix.size();
    int m = matrix[0].size();
    for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<"\n";
          }
    vector<vector<int>> ans = setZeroes(matrix);

    cout << "The Final matrix is: \n";
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "\n";
    }
    
#ifdef INSANE
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}