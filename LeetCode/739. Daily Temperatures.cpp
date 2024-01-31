// TLE Solutations: 
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int>v;
        for(int i=0; i<temp.size(); i++){
            bool f = false;
            for(int j=i+1; j<temp.size(); j++){
                if(temp[i]<temp[j]){
                    v.push_back(j-i);
                    f=true;
                    break;
                }
            }
            if(!f)v.push_back(0);
        }
        return v;
    }
};