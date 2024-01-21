
// TC : O(n) SC: O(n); Cause we use memorization here it's save out TC
class Solution {
public:
    int solve(vector<int>&nums, int n, vector<int>&dp){
        if(n < 0) return 0;
        if(n == 0) return nums[0];
        if(dp[n] != -1) return dp[n];

        int incl = solve(nums, n-2, dp) + nums[n];
        int excl = solve(nums, n-1, dp) + 0;
        dp[n] = max(incl, excl);
        return dp[n];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,-1);
         return solve(nums, n-1, dp);
    }
};

// The TC was same O(n) for its liner loop but here we save the space it O(1); 

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int prev2 = 0;
        int prev1 = nums[0];

        for(int i=1; i<n; i++){
            int excl = prev2 + nums[i];
            int incl = prev1 + 0;
            int ans = max(excl, incl);
            prev2 = prev1;
            prev1 = ans;
        }
        return prev1;
    }
};