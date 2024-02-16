    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>v(n), x(n), ans(v);
        v[0] = 1;
        for(int i=1; i<nums.size(); i++){
            v[i] = v[i-1]*nums[i-1];
        }
        x[n-1]=1;
        for(int i=n-2; i>=0; i--){
            x[i] = x[i+1] * nums[i+1];
        }
        for(int i=0; i<n; i++){
            ans[i] = v[i]*x[i];
        }
        return ans;
    }