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

int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
        int ans=0, lastM=0, lastG=0, lastP=0;

    for(int i=0; i<garbage.size(); i++){
        for(auto c:garbage[i]){
            ans++;
            if(c=='M')lastM=i;
            else if(c=='G')lastG=i;
            else lastP=i;
        }
    }

    // Travel time calculation optimazion;
    for(int i=1; i<travel.size(); i++){
        travel[i]+=travel[i-1];
    }

    if(lastM>0)ans+=travel[lastM-1];
    if(lastG>0)ans+=travel[lastG-1];
    if(lastP>0)ans+=travel[lastP-1];

    return ans;
}

int main() {
#ifdef anikakash
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);  
   freopen("out.txt", "w", stdout);
#endif
  
    FASTERIO; 
   
   vector<string> garbage= {"G","P","GP","GG"};
   vector<int> travel = {2,4,3};
   cout<<garbageCollection(garbage, travel)<<endl;
    
#ifdef anikakash
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}