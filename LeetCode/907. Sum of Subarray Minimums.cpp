class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size(), mod = 1000000007;
        vector<int>left(n,0), right(n,0);
        stack<pair<int,int>>sleft, sright;

        for(int i=0; i<n; i++){
            int cnt=1;
            while(!sleft.empty() && sleft.top().first>arr[i]){
                cnt+=sleft.top().second;
                sleft.pop();
            }
            sleft.push({arr[i], cnt});
            left[i] = cnt;
        }

        for(int i=n-1; i>=0; i--){
            int cnt=1;
            while(!sright.empty() && sright.top().first>=arr[i]){
                cnt+=sright.top().second;
                sright.pop();
            }
            sright.push({arr[i], cnt});
            right[i] = cnt;
        }

        int ans = 0;
        for(int i=0; i<n; i++){
            ans = (ans + (arr[i] * (long long)left[i]*right[i])%mod)%mod;
        }
        return ans;
    }
};