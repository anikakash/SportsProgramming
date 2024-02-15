class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long curSum=0, ans=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<curSum){
                ans = curSum+nums[i];
            }
            curSum+=nums[i];
        }
        return ans == 0 ? -1 : ans;
    }
};