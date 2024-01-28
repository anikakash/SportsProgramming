// TLE Solutation Brute Froce:

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


// Optimized Code: TC 0(N^2 * M )
class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int cols = matrix[0].size(), rows = matrix.size();
       
       for(int row = 0; row < rows; row++){
           for(int col = 1; col < cols; col++){
               matrix[row][col] += matrix[row][col-1];
           }
       }

        int res = 0;
       for(int startCol = 0; startCol < cols; startCol++){
           for(int j = startCol; j < cols; j++){
               unordered_map<int,int>m;
               m[0]=1;
               int cumSum = 0;
               for(int row = 0; row < rows; row++){
                   cumSum += matrix[row][j] - (startCol>0 ? matrix[row][startCol-1] : 0);
                   if(m[cumSum-target]){
                        res += m[cumSum-target];
                   }
                   m[cumSum]++;
               }
           }
       }
       return res;
    }
}; 