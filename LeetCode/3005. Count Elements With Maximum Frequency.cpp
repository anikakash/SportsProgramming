class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0; i<nums.size(); i++) m[nums[i]]++;
        int mx = INT_MIN;
        for(auto it : m){
            if(it.second>mx) mx = it.second;
        }
        int sum=0;
        for(auto it : m) 
            if(it.second == mx) sum+=mx;
        return sum;
    }
};