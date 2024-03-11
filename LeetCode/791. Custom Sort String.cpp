class Solution {
public:
     string customSortString(string order, string str) {
        unordered_map<char,int>m;
        for(int i=0; i<str.size(); i++) m[str[i]]++;
        // for(auto it: m)cout<<it.first<<" "<<it.second<<endl;
        string s = "";
        for(int i=0; i<order.size(); i++){
            if(m[order[i]]){
                int tmp = order[i];
                while(m[order[i]]){
                    s+=order[i];
                    m[order[i]]--;
                }
            }
        }
        for(auto it : m) {
            if(it.second){
                int tmp = it.second;
                while(tmp){
                    s+=it.first; 
                    tmp--;
                }
                
            }
        }
        // cout<<endl;
        // for(auto it: m)cout<<it.first<<" "<<it.second<<endl;

    return s;
}
};