class Solution {
public:
   vector<int> findErrorNums(vector<int>&v){
    // sort(v.begin(), v.end());
    unordered_map<int,int>m;
    int duplicate=0;
    for(int i=0; i<v.size(); i++){
        m[v[i]]++;
        if(m[v[i]]>1) duplicate = v[i];
    }

    int val = 0;
    for(int i=1; i<=v.size(); i++){
        if(m[i]==0){
             val = i;
        }
    }
    return {duplicate, val};
}

};