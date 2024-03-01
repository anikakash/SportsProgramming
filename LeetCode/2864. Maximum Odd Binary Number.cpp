class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        if(s.size()==1) return s;
        string one = "", zero = "";
        for(int i=0; i<s.size(); i++){
            if(s[i] == '0')zero += '0';
            else one += '1';
        }
        if(one.size()>0 && zero.size()>0){
            one.pop_back();
            one+='0';
        }
        if(zero.size()>0 && one.size()>0){
            zero.pop_back();
            zero+='1';
        }
        one+=zero;
        return one;
    }
};