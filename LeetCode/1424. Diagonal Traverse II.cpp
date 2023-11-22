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

vector<int> findDiagonalOrder(vector<vector<int>>& num) {
        unordered_map<int,vector<int>>ump;

        for(int i=0; i<num.size(); i++){
            for(int j=0; j<num[i].size(); j++){
                ump[i+j].push_back(num[i][j]);
            }
        }

            vector<int>ans;
        for(int i=0; i<ump.size(); i++){
            for(auto val = ump[i].rbegin(); val!=ump[i].rend(); val++){
                ans.push_back(*val);
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
   
   vector<vector<int>> num= {{1,2,3,4,5},{6,7},{8},{9,10,11},{12,13,14,15,16}};
   
  vector<int>v =findDiagonalOrder(num);
  
      for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;
        
#ifdef anikakash
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}