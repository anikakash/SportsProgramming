class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        queue<int>q;
        for(int i=1; i<9; i++){
            q.push(i);
        }
        vector<int>v;
        while(!q.empty()){
            int x = q.front();
            q.pop();
            if(x>=low && x<=high){
                v.push_back(x);
            }
            int lastDigiht = x%10;
            if(lastDigiht+1<=9){
                q.push(x*10+(lastDigiht+1));
            }

        }
        return v;
    }
};