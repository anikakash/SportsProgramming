class Solution {
public:
   struct cmpFunctor {
    bool operator()(pair<int,int>a, pair<int,int>b){
        return a.second<b.second;
    }
};
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>m;
        for(int i=0; i<arr.size(); i++)m[arr[i]]++;
        vector<pair<int,int>>v;
        for(auto &it : m)v.push_back(it);
        
        sort(v.begin(), v.end(),  cmpFunctor());
        
        int ans = v.size();
        int i = 0;
        while(k>0 && i<v.size()){
            int freq = v[i].second;

            if(k>=freq){
                k-=freq;
                ans--;
            }else break;
            i++;
        }
        return ans;
    }
};