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

    int dp[101][101]={0};
int minFallingPathSum(vector<vector<int>>& matrix) {
    int n = matrix.size();

    for(int i=0; i<n; i++) dp[0][i] = matrix[0][i];

    for(int i=1; i<n; i++){
        for(int j=0; j<n; j++){
            int mn = INT_MAX;
            if(i-1>=0)mn = min(mn, dp[i-1][j]);
            if(i-1>=0 && j-1>=0) mn = min(mn, dp[i-1][j-1]);
            if(i-1>=0 && j+1<n) mn = min(mn, dp[i-1][j+1]);

            dp[i][j] = mn+matrix[i][j];
        }
    }
    int ans = dp[n-1][0];
    for(int i=1; i<n; i++)ans = min(ans, dp[n-1][i]);

    return ans;
}

int main() {
#ifdef anikakash
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);  
   freopen("out.txt", "w", stdout);
#endif
  
    FASTERIO; 
    vector<vector<int>> matrix = {
        {2,1,3},
        {6,5,4},
        {7,8,9}
    };

    cout<<minFallingPathSum(matrix)<<endl;

#ifdef anikakash
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}