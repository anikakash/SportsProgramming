class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int requer_count = t.size();

        if(requer_count>n) return "";

        unordered_map<char,int>m;
        for(char ch : t)
            m[ch]++;

        int start_window = 0;
        int j=0, i=0;
        int mainWindowSize = INT_MAX;

        while(j<n){
            if(m[s[j]]>0)
                requer_count--;
            m[s[j]]--;
            while(requer_count == 0){
                int curWindowSize = j-i+1;
                if(curWindowSize < mainWindowSize){
                    mainWindowSize = curWindowSize;
                    start_window = i;
                }
                m[s[i]]++;
                if(m[s[i]]>0)
                    requer_count++;
                i++;
            }
            j++;
        }
        return mainWindowSize == INT_MAX ? "" : s.substr(start_window, mainWindowSize);
    }
};