class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        // Save the dimensions of the image.
        int m = img.size();
        int n = img[0].size();

        // Create temp array of size n.
        vector<int> temp(n);
        int prevVal = 0;

        // Iterate over the cells of the image.
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                // Initialize the sum and count 
                int sum = 0;
                int count = 0;

                // Bottom neighbors
                if (i + 1 < m) {
                    if (j - 1 >= 0) {
                        sum += img[i + 1][j - 1];
                        count += 1;
                    }
                    sum += img[i + 1][j];
                    count += 1;
                    if (j + 1 < n) {
                        sum += img[i + 1][j + 1];
                        count += 1;
                    }
                }

                // Next neighbor
                if (j + 1 < n) {
                    sum += img[i][j + 1];
                    count += 1;
                }
                
                // This cell
                sum += img[i][j];
                count += 1;

                // Previous neighbor
                if (j - 1 >= 0) {
                    sum += temp[j - 1];
                    count += 1;
                }

                // Top neighbors
                if (i - 1 >= 0) {
                    // Left-top corner-sharing neighbor.
                    if (j - 1 >=  0) {
                        sum += prevVal;
                        count += 1;
                    }
                    
                    // Top edge-sharing neighbor.
                    sum += temp[j];
                    count += 1;

                    // Right-top corner-sharing neighbor.
                    if (j + 1 < n) {
                        sum += temp[j + 1];
                        count += 1;
                    }
                }

                // Store the original value of temp[j], which represents
                // original value of img[i - 1][j].
                if (i - 1 >= 0) {
                    prevVal = temp[j];
                }

                // Save current value of img[i][j] in temp[j].
                temp[j] = img[i][j];

                // Overwrite with smoothed value.
                img[i][j] = sum / count;
            }
        }

        // Return the smooth image.
        return img;
    }
};