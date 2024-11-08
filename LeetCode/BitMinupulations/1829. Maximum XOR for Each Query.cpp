class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int>ans;

        int XOR = 0;
        for(int i=0; i<nums.size(); i++){
            XOR^=nums[i];
        }

         int mask = ((1<<maximumBit)-1);

         for(int i=0; i<nums.size(); i++){
            ans.push_back(XOR^mask);
            XOR = XOR^nums[nums.size()-i-1];
         }
         return ans;
    }
};