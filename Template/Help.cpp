#include<bits/stdc++.h>
using namespace    std;

#define flush                   cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                      cout<<'\n';
#define pi                      acos(-1.0) //3.1415926535897932384626
#define pb                      push_back
#define mx                      10000007
#define EPS                     1e-10
#define dpoint(x)               fixed<<setprecision(x)
typedef long long int           ll;
typedef double                  dl;
typedef unsigned long long      ul;

// Debugger
#define debugNS(a,b)             cout<<a<<" = "<<b<<endl;
#define debugN(b)               cout<<b<<endl;



int main(){
   
  #ifdef anikakash
       clock_t tStart = clock();
       freopen("INPUT.txt","r",stdin);
       freopen("OUTPUT.txt","w",stdout);
  #endif
    FASTERIO;
    
     int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>arr;
        for(int i=0; i<n; i++){
            ll x; cin>>x;
            arr.pb(x);
        }
            ll sum=0, t = 0;
        sort(arr.begin(), arr.end());
           
        if(n==1)cout<<arr[0]<<endl;
        else{
            sum = arr[0]+arr[1];
            t = sum;
            for(int i=2; i<n; i++){
                t +=arr[i];
                sum+=t;
                //debugN(sum);
            }
            //cout<<t<<endl;
           // debugNS("ans",sum);
            cout<<sum<<endl;
        }
    }

  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif
   return 0;
}