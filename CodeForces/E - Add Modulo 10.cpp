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



bool check_zero_case(vector<int>&v, int n){

    for(int i=0; i<n; i++)
        if(v[i]%10==5)v[i]+=5;

    for(int i=0; i<n-1; i++){
        if(v[i]!=v[i+1]){
            return false;
        }
    }
    return true;

}

bool check_all_case(vector<int>&v, int n){

    for(int i=0; i<n; i++){
        while(v[i]%10!=2 && v[i]%10!=0){
            v[i]=v[i]+(v[i]%10);
        }
    }

    int x = v[0]%20;
    for(int i=1; i<n; i++){
        int y = v[i]%20;
        if(x!=y){
            return false;
        }
    }
    return true;
}

void solve(){
    int n; cin >>n;
    vector<int>v(n);
    bool which_call = false;
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]%10==5 || v[i]%10==0)which_call = true;
    }

    if(which_call){
        bool chk = check_zero_case(v,n);
        if(chk)cout<<"YES\n";
        else cout<<"NO\n";
        return;
    }
    else{
        bool chk = check_all_case(v,n);
        if(chk)cout<<"YES\n";
        else cout<<"NO\n";
        return;
    }

}

int main() {
#ifdef INSANE
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);
   freopen("anik.txt", "w", stdout);
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