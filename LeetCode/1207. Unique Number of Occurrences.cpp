class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m;
        for(int i=0; i<arr.size(); i++)m[arr[i]]++;
        unordered_set<int>s;
        for(auto it : m){
            if(s.find(it.second)==s.end())s.insert(it.second);
            else return false;
        }
        return true;   
    }
};