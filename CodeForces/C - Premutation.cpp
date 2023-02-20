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


void solve(){
   int n; cin>>n;
   vector<vector<int>>v(n,vector<int>(n-1));

   for(int i=0; i<n; i++){
      for(int j=0; j<n-1; j++){
         cin>>v[i][j];
      }
   }
   int arr[110]={0};

   for(int i=0; i<n; i++) arr[v[i][0]]++;

      int missing = 0, val;
   for(int i=1; i<102; i++){
      if(missing<arr[i]){
         val = i; missing=arr[i];
      }
   }

   for(int i=0; i<n; i++){
      bool flg=true;
      for(int j=0; j<n-1; j++){
         if(val==v[i][j]){
            flg=false; break;
         }
      }

      if(flg){
         cout<<val<<" ";
         for(int j=0; j<n-1; j++){
            cout<<v[i][j]<<' ';
         }
         break;
      }
   }
   NL;


}

int main() {
#ifdef INSANE
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);
   freopen("out.txt", "w", stdout);
#endif
  
    FASTERIO; // comment when use scanf and printf 
   
   int tt, caseno=1; 
   cin>>tt;
   while(tt--){
      solve();
   }
    
#ifdef INSANE
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}

