class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int a = nums[nums.size()-1]-1;
        int b = nums[nums.size()-2]-1;
        a*=b;
        return a;
    }
};