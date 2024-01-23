class Solution {
public:

    int maxLength(vector<string>& arr, string str = "", int idx = 0) {
        unordered_set<char>c(str.begin(), str.end());
        if(c.size() != str.size()) return 0;
        int ans = str.size();
        for(int i=idx; i<arr.size(); i++){
            ans = max(ans, maxLength(arr, str+arr[i], i+1));
        }
        return ans;
    }
};