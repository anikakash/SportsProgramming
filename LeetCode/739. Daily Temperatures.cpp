// TLE Solutations: 
// Ref: https://youtu.be/ZhZEmGv-sOY?si=9PgEzRmd7R2cNgE_
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

// AC Code: TC: O(n):
// the while loop complexity is O(1);

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {

        stack<int>st; int n= arr.size();
        vector<int>v(n);
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && arr[i]>=arr[st.top()]){
                st.pop();
            }
            if(st.empty()){
                v[i]=0; // no day next;
            }
            else{
                v[i]= st.top()-i; // days;
            }
            st.push(i);
        }
        return v;
    }
};