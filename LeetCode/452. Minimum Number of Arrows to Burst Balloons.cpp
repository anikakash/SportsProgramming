class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        
        vector<int>prev=points[0];
        int cnt = 1, n = points.size();
        for(int i=1; i<n; i++){
            int curStart = points[i][0];
            int curEnd   = points[i][1];

            int prevStart = prev[0];
            int prevEnd   = prev[1];

            if(curStart > prevEnd){
                cnt++;
                prev = points[i];
            }else{
                prev[0] = max(curStart, prevStart);
                prev[1] = min(curEnd, prevEnd);
            }
        }
        return cnt;
    }
};