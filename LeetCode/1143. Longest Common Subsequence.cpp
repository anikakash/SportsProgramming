// TLE : TC O(2^n*m)
class Solution {
public:
    int lcs(string &s1, string &s2, int i, int j){
        if(i == s1.size() || j == s2.size()) return 0;
        if(s1[i] == s2[j]) return 1+lcs(s1, s2, i+1, j+1);
        else return max(lcs(s1, s2, i+1, j), lcs(s1, s2, i, j+1));
    }
    int longestCommonSubsequence(string text1, string text2) {
        return lcs(text1, text2, 0,0);
    }
};

// Memorization Approch using Previous Solutations: TC : O(m*n)
// To Down approch DP: 

class Solution {
public:
    int lcs(string &s1, string &s2, int i, int j, vector<vector<int>>&dp){
        if(i == s1.size() || j == s2.size()) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        if(s1[i] == s2[j]) return dp[i][j] =  1+lcs(s1, s2, i+1, j+1, dp);
        else return dp[i][j] = max(lcs(s1, s2, i+1, j, dp), lcs(s1, s2, i, j+1, dp));
    }
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>>dp(text1.size(), vector<int>(text2.size(), -1));
        return lcs(text1, text2, 0,0, dp);
    }
};