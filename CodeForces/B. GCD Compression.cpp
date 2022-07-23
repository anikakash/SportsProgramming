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
    vector<pair<int,int>>even, odd;
    for(int i=1; i<=2*n; i++){
        int x; cin>>x;
        if(x%2)odd.pb({x,i});
        else even.pb({x,i});
    }
    // for(auto it:odd)cout<<it.first<<" ";NL;
    // for(auto it:even)cout<<it.first<<" ";NL;
    if(odd.size()%2==1)odd.pop_back();
    if(even.size()%2==1)even.pop_back();

    n--;
    if(odd.size()>0){
        for(int i=0; i<odd.size()-1; i+=2){
            cout<<odd[i].second<<" "<<odd[i+1].second<<endl;
            n--;
            if(n==0)break;
        }
    }
   if(even.size()>0){
        if(n!=0){
            for(int i=0; i<even.size()-1; i+=2){
                cout<<even[i].second<<" "<<even[i+1].second<<endl;
                n--;
                if(n==0)break;
            }
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

   int tt; 
   cin>>tt; 
   while(tt--)
    solve();

#ifdef INSANE
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}