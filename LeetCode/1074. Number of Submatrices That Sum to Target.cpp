class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int n = matrix[0].size(), m = matrix.size();
        int ans = 0;
        for(int s_r = 0; s_r < m; s_r++ ){
            for(int s_c = 0; s_c < n; s_c++){

                for(int e_r = s_r; e_r < m; e_r++){
                    for(int e_c = s_c; e_c < n; e_c++){

                        int sum = 0; 
                        for(int i = s_r; i<=e_r; i++){
                            for(int j = s_c; j<=e_c; j++){
                                sum += matrix[i][j];
                            }
                        }
                        if(sum == target) ans++;
                    }
                }
            }
        }
        return ans;
    }
}; 