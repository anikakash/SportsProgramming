class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        
        int n=dist.size();
        vector<float>arr;
        for(int i=0; i<n; i++){
            arr.push_back((float)dist[i]/speed[i]);
        }
        sort(arr.begin(), arr.end());
        int ans=0;
        for(int i=0; i<n; i++){
            if(i>=arr[i]) break;
            ans++;
        }
        return ans;
    }
};