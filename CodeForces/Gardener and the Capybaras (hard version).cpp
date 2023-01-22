#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define MaxN                     100005 //1e5
#define EPS                      1e-18
#define dpoint(x)                fixed<<setprecision(x)
#define Fill(ar, weight)         memset(ar, weight, sizeof(ar))
typedef long long int            ll;
typedef double                   dl;
typedef unsigned long long int   ull;



void solve(){
  string s; cin>>s;
  int n = s.size();
  if((s[0]=='a' && s[1]=='a')|| (s[0]=='b' && s[1]=='b') || (s[0]=='b' && s[1]=='a')){
      cout<<s[0]<<' '<<s[1]<<' ';
      for(int i=2; i<n; i++)cout<<s[i];NL;
  }
   else{
      int idx = -1;
      for(int i=2; i<n; i++){
         if(s[i]=='a'){
            idx=i; break;
         }
      }
      if(idx==-1){
         for(int i=0; i<n-2; i++)cout<<s[i];
            cout<<' '<<s[n-2]<<' '<<s[n-1]<<endl;
      }
      else{
         cout<<s[0]<<' ';
         for(int i=1; i<idx; i++){
            cout<<s[i];
         }
         cout<<' ';
         for(int i=idx; i<n; i++)cout<<s[i];
            NL;
      }
   }
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
   flush; 
   while(tt--){
      solve();
   }
    
#ifdef INSANE
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}

