class Solution {
public:
    int pivotInteger(int n) {
        long long res = n*(n+1)/2;
        for(int i=1; i<=n; i++){
            long long val = i*(i+1)/2;
            if(((res-val)+i) == val){
                return i;
            }
        }
        return -1;
    }
};