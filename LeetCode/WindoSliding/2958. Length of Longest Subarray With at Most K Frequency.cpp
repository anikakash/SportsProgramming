class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
       int n = nums.size(); 
       unordered_map<int,int>m;
       int i=0, j=0, res = 0;
       while(j<n){
            m[nums[j]]++;
            while(i < j && m[nums[j]] >k){
                m[nums[i]]--;
                i++;
            }
            res = max(res, j-i+1);
            j++;
       }
       return res;
    }
};