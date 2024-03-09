class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m1, m2;
        for(int i=0; i<nums1.size(); i++) m1[nums1[i]]++;

        for(int i=0; i<nums2.size(); i++)
            if(m1[nums2[i]])
                return nums2[i];
        
        return -1;
    }
};