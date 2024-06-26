class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        m[0]=1;
        int res = 0, sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            if(m[sum-k]){
                res += m[sum-k];
            }
            m[sum]++;
        }
        return res;
    }
};