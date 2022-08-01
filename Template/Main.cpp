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
    int n,x; cin>>n>>x;
    vector<int>v(n);
    int to=0;
    for(int i=0;i<n;i++)cin>>v[i];
        // sort(v.begin(), v.end());
        int mn = abs(v[0]-x), mx = abs(v[0]+x), cnt=0;
     // cout<<v[0]<<" = "<<mn<<" "<<mx<<endl;

    for(int i=1; i<n; i++){
        int tm1=abs(v[i]-x), tm2=abs(v[i]+x);
        if((mn<=tm1 && tm1<=mx)||(mn<=tm2 && tm2<=mx)){
            mn = max(tm1,mn); mx = min(mx,tm2);

        }
        else if((tm1<=mn && mn<=tm2) ||(tm1<=mx && mx<=tm2)){
                      mn = max(tm1,mn); mx = min(mx,tm2);

        }
        else{
            cnt++;
            // cout<<v[i]<<" WAS "<<mn<<" "<<mx<<endl;
            mn = abs(v[i]-x); mx = abs(v[i]+x);
            // cout<<v[i]<<" Change "<<tm1<<" "<<tm2<<endl;
        }
        // cout<<v[i]<<" = "<<tm1<<" "<<tm2<<endl;
    }
    cout<<cnt<<endl;
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
   while(tt--)solve();

#ifdef INSANE
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}