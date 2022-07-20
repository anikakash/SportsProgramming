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
    int t; cin>>t;
    while(t--){
 int n, m; cin>>n>>m;
   vector<int>v(n);
   for(int i=0; i<n; i++)cin>>v[i];
    string ss = "";
    for(int i=0; i<m; i++)ss.pb('B');
    for(int i=0; i<n; i++){
        int x = v[i]-1;
        int y = (m+1)-v[i];
            y--;
            // cout<<x<<" "<<y<<endl;
       if(x<m && ss[x]=='B'){
        if(y<x){
            if(ss[y]=='B')ss[y]='A';
            else ss[x]='A';
        }
        else ss[x]='A';
        // ss[x]='A';
       }
       else if(y<m && ss[y]=='B')ss[y]='A';
    }
    // reverse(ss.begin(), ss.end());
    cout<<ss<<endl;
        

    }
    return 0;
    
}

