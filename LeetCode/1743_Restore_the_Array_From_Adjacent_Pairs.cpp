1743_Restore_#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define MaxN                     1000000007 //1e5
#define EPS                      1e-18
#define dpoint(x)                fixed<<setprecision(x)
#define Fill(ar, weight)         memset(ar, weight, sizeof(ar))
typedef long long int            ll;
typedef double                   dl;
typedef unsigned long long int   ull;


void dfs(map<int,vector<int>>&mp, set<int>&s, int head, vector<int>&ans){
    if(s.find(head)!=s.end()) return;
    ans.push_back(head);
    s.insert(head);

    for(auto x:mp[head])
        dfs(mp, s, x, ans);
}

vector<int> restoreArray(vector<vector<int>>& adj) {
        map<int,vector<int>>mp;
        for(auto it:adj){
            mp[it[0]].push_back(it[1]);
            mp[it[1]].push_back(it[0]);
        }

        int head;
        for(auto it:mp){
            if(it.second.size()==1){
                head=it.first;
                break;
            }
        }

        vector<int>ans;
        set<int>s;
        dfs(mp,s,head,ans);
        return ans;
}

int main() {
#ifdef anikakash
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);  
   freopen("out.txt", "w", stdout);
#endif
  
    FASTERIO; 
    vector<vector<int>> v = {{2, 1}, {3, 4}, {3, 2}};

    vector<int>ans = restoreArray(v);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
#ifdef anikakash
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}the_Array_From_Adjacent_Pairs