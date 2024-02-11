// TC : O(n*n*m*9)
// SC : O(n*n*m);
class Solution {
public:
    int n,m;
    int dp[71][71][71];
    int solve(vector<vector<int>>& grid, int row, int c1, int c2){
        if(row>=m) return 0;
        if(dp[row][c1][c2] != -1) return dp[row][c1][c2];
        int cherry = grid[row][c1];
        if(c1 != c2){ // if not same cell
            cherry+=grid[row][c2];
        }
        int ans = 0;
        for(int i = -1; i <= 1; i++){
            for(int j = -1; j <= 1; j++){
                int new_row = row + 1;
                int new_c1 = c1 + i;
                int new_c2 = c2 + j;
                
                if(new_c1 >= 0 && new_c2 >= 0 && new_c1 < n && new_c2 < n)
                    ans = max(ans, solve(grid, new_row, new_c1, new_c2));
            }
        }
        return dp[row][c1][c2] =  ans+cherry;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        memset(dp, -1, sizeof(dp));
        n = grid[0].size();
        m = grid.size();
        return solve(grid,0,0,n-1);
    }
};