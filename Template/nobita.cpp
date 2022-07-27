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

int main() {

    FASTERIO;
    int m; cin>>m;
    while(m--){
              int n; cin>>n;
   // cout<<" n = "<<n<<" :";
   if(n==1)cout<<1<<endl;
   else{
        if(n%2==0){
            for(int i=1; i<=n; i+=2){
                cout<<i+1<<" "<<i<<" ";
            }
            NL;
        }
        else{
            for(int i=1; i<n-2; i+=2){
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<n<<" "<<n-2<<" "<<n-1;
            NL;
        }
   }
    }
    return 0;
    
}

