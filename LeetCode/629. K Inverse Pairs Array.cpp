
// Explain : https://youtu.be/y9yo1kyW7Bg?si=dfkQRCFMOcomEGZ9

// TLE Code:  TC(K^n);
class Solution {
public:
    int mod = 1e9+7;
    int solve(int n, int k){
        if(n==0) return 0;
        if(k==0) return 1;
        int res = 0;
        for(int i=0; i<=min(n-1,k); i++){
            res = (res + solve(n-1, k-i)%mod)%mod;
        }
        return res;
    }
    int kInversePairs(int n, int k) {
        return solve(n,k);
    }
};


// Same Code Using Memorization :  Got AC: TC : O(n*k*n) SC : O(N*K)
class Solution {
public:
    int mod = 1e9+7;
    int dp[1001][1001];
    int solve(int n, int k){
        if(n==0) return 0;
        if(k==0) return 1;
        if(dp[n][k] != -1) return dp[n][k];
        int res = 0;
        for(int i=0; i<=min(n-1,k); i++){
            res = (res + solve(n-1, k-i)%mod)%mod;
        }
        return dp[n][k] = res;
    }
    int kInversePairs(int n, int k) {
        memset(dp, -1, sizeof(dp));
        return solve(n,k);
    }
};


// Bottom Up Solve TC  :
class Solution {
public:
    int mod = 1e9+7;
    int kInversePairs(int n, int k) {
       vector<vector<int>>dp(n+1, vector<int>(k+1));
       for(int i=0; i<=n; i++) dp[i][0] = 1;

       for(int i=1; i<=n; i++){
           for(int j=1; j<=k; j++){
               for(int inv = 0; inv<=min(i-1, j); inv++){
                   dp[i][j] = (dp[i][j]%mod + dp[i-1][j-inv]%mod)%mod;
               }
           }
       }
       return dp[n][k];
    }
};


// Optimized Bottom Up 

class Solution {
public:
    int mod = 1e9+7;
    int kInversePairs(int n, int k) {
       vector<vector<int>>dp(n+1, vector<int>(k+1));
       for(int i=0; i<=n; i++) dp[i][0] = 1;

       for(int i=1; i<=n; i++){
           long long int sum = 1;
           for(int j=1; j<=k; j++){

               sum+=dp[i-1][j];
               if(j>=i) {
                   sum -= dp[i-1][j-i];
               }

               dp[i][j] = sum%mod;

           }
       }
       return dp[n][k];
    }
};