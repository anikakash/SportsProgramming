class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m;
        for(int i=0; i<nums1.size(); i++){
            m[nums1[i]]++;
        }
        vector<int>v;
        for(int i=0; i<nums2.size(); i++){
            if(m[nums2[i]]>0){
                v.push_back(nums2[i]);
                m[nums2[i]] = -1;
            }
        }
        return v;
    }
};