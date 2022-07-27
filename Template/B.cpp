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
    int n; cin>>n;
    int cnt=0, ok=1;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]==1)cnt++;
    }
    if(cnt==n && cnt%2==0)cout<<"Second\n";
    else if(cnt==n && cnt%2==1)cout<<"First\n";
    else{
      cnt=0;
      for(int i=0; i<n; i++){
         if(v[i]==1)cnt++;
         else break;
      }
      if(cnt%2==0)cout<<"First\n";
    else cout<<"Second\n";
    }

}

int main() {
#ifdef INSANE
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);
   freopen("out.txt", "w", stdout);
#endif
  
    FASTERIO; // comment when use scanf and printf 

   int tt; 
   cin>>tt; 
   while(tt--)
    solve();

#ifdef INSANE
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}