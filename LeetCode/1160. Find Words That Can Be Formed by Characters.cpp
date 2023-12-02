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

int countCharacters(vector<string>& words, string chars) {
        vector<unordered_map<char,int>>vump;
        unordered_map<char,int>ump;

        for(int i=0; i<words.size(); i++){
            string tmp = words[i];
            unordered_map<char,int>tmap;
            for(int j=0; j<tmp.size(); j++){
                tmap[tmp[j]]++;
            }
            vump.push_back(tmap);
        }

        for(int i=0; i<chars.size(); i++)
            ump[chars[i]]++;
        
        int ans=0;
       for(int i=0; i<vump.size(); i++){
        bool flg=true; int tmp_sum=0;
           for(auto it: vump[i]){
                if(ump.find(it.first) == ump.end() || ump[it.first]<it.second){
                    flg=false; break;
                }
                tmp_sum+=it.second;
           }
           if(flg){
                ans+=tmp_sum;
           }
       }

       return ans;

}
int main() {
#ifdef anikakash
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);  
   freopen("out.txt", "w", stdout);
#endif
  
    FASTERIO; 
    vector<string>vs={"cat","bt","hat","tree"};
    string chrs= "atach";
  cout<<countCharacters(vs,chrs)<<endl;

#ifdef anikakash
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}