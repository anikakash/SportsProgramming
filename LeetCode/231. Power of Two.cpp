class Solution {
public:
    bool setBit(int n){
        long long count = 0;
        while(n){
            count += n&1;
            n >>= 1;
        }
        if(count==1) return true;
        return false;
    }
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        if(n>0){
            if(!(n&(n-1))) return true;
            else return false;
        }
        else if(n<0){
            if(n%2!=0 && n!=-1){
                n*=-1;
                if(!(n&(n-1))) return true;
                else return false;
            }
        }
        return false;
    }
};