#include<bits/stdc++.h>
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

 bool isSubsequence(string s, string t) {
        unordered_map<char,int>s1;
        unordered_map<char,int>t1;
        for(int i=0; i<s.size(); i++){
            s1[s[i]]++;
        }

        for(int i=0; i<t.size(); i++){
            t1[t[i]]++;
        }
        // for(auto it: s1)cout<<it.first<<" "<<it.second<<endl;
        //     cout<<"------\n";
        // for(auto it: t1)cout<<it.first<<" "<<it.second<<endl;

        for(auto it : s1){
            for(auto it2 : t1){

                if((it.first != it2.first) ||  (it.second !=it2.second)){
                    cout<<it.first<<" "<<it2.first<<endl;
                    cout<<it.second<<" "<<it2.second<<endl;
                    return false;

                }
            }
        }
        return true;
}

int main() {
#ifdef anikakash
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);  
   freopen("out.txt", "w", stdout);
#endif
  
    FASTERIO; 

  cout<<isSubsequence("abc", "ahbgdc")<<endl;

#ifdef anikakash
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}