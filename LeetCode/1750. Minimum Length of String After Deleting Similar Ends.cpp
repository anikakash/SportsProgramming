class Solution {
public:
    int minimumLength(string s) {
        int l = 0, r = s.size()-1;
        while(l<r && s[l] == s[r]){
            char ch = s[l];
            while(l<=r && s[l] == ch)
                l++;
            while(l<=r && s[r] == ch)
                r--;
        }
        return l>r ? 0:(r-l)+1;
    }
};