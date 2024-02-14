class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        vector<int>neg, pos;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0) pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }
        vector<int>ans;
        for(int i=0; i<pos.size(); i++){
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }
        return ans;
    }
};