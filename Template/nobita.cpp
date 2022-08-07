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


void ans(){
int n; cin>>n;
    
    if(n==1)cout<<0<<endl;
    else if(n==2)
  for(int i=1; i<=n; i++)cout<<i<<" ";NL;

}
int main() {


    FASTERIO;

    int tt; cin>>tt;
    
    while(tt--){
         ans();
    }
    return 0;
    
}

