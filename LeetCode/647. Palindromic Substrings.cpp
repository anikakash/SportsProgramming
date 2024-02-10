// TC: O(N^2*Log(N))
class Solution {
public:

    int countSubstrings(string s) {
        int n = s.size();
        map<pair<int,int>, int>m;
        int ans=0;
        for(int i=0; i<n; i++){
            m[{i,i}]=1;
            ans++;
        }


        // for length:
        for(int i=2; i<=n; i++){
            for(int j=0; j<n; j++){
                if(((j+i-1)<n) && (s[j]==s[j+i-1])){
                    if(i==2){
                        m[{j,j+i-1}]=1;
                        ans++;
                    }
                    else{
                        if(m[{j+1, j+i-2}]==1){
                            m[{j,j+i-1}]=1;
                            ans++;
                        }
                    }
                }
            }
        }
        // for(auto it : m)cout<<it.first.first<<" "<<it.first.second<<" "<<it.second<<endl;
        return ans;

    }
};

// TC O(N^2);
class Solution {
public:

    int dp[1001][1001];

    bool check(string &s, int i, int j){
        if(i>j) return true;
        if(dp[i][j] != -1) return dp[i][j];
        if(s[i]==s[j]){
            return dp[i][j] = check(s,i+1,j-1);
        }
        return dp[i][j] = false;
    }

    int countSubstrings(string s) {
        memset(dp,-1,sizeof(dp));
        int cnt=0;
       for(int i = 0; i<s.size(); i++){
           for(int j = i; j<s.size(); j++){
              if(check(s,i,j))
                cnt++;
           }
       }
        return cnt;
    }
};