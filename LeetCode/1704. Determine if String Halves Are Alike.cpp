class Solution {
public:
    bool halvesAreAlike(string s) {
       transform(s.begin(), s.end(), s.begin(), ::tolower); 
       int sz = s.size();
        int cnt1=0, cnt2=0;
        for(int i=0; i<(sz/2); i++){
            if((s[i]=='a') || (s[i]=='e') || (s[i]=='i') || (s[i]=='o') || (s[i]=='u'))cnt1++;
        }
        for(int i=(sz/2); i<s.size(); i++){
            if((s[i]=='a') || (s[i]=='e') || (s[i]=='i') || (s[i]=='o') || (s[i]=='u'))cnt2++;
        }
            // cout<<cnt<<endl;
        return (cnt1==cnt2 ? true : false);
    }
};