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

int dp[51][51][51];
    int mod = 1e9+7;
    int dfs(int m, int n, int maxMove, int r, int c){
        if(r<0 || c<0 || r>=m || c>=n) return 1; // goes out of the matrix using 1 move. 
        if(maxMove <= 0) return 0;
        if(dp[r][c][maxMove] != -1) return dp[r][c][maxMove];
        return dp[r][c][maxMove] = (dfs(m, n, maxMove-1, r+1, c)%mod +
                                   dfs(m, n, maxMove-1, r-1, c)%mod + 
                                   dfs(m, n, maxMove-1, r, c+1)%mod + 
                                   dfs(m, n, maxMove-1, r, c-1)%mod) % mod;
}
    
int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        memset(dp, -1, sizeof(dp));
        return dfs(m, n, maxMove, startRow, startColumn);
}

int main() {
#ifdef anikakash
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);  
   freopen("out.txt", "w", stdout);
#endif
  
    FASTERIO; 
     
 cout<<findPaths(8,50,23,5,26)<<endl;

#ifdef anikakash
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}
