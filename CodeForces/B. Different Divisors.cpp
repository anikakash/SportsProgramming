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

int next_prime(int n){
    while(1){
        bool flg=true;
        for(int i=2; i*i<=n; i++){
            flg=true;
            if(n%i==0){
                flg=false;
                 break;
            }
        }
        if(flg==false)n++;
        else break;
    }
    return n;
}
void solve(){
    string s1, s2; cin>>s1>>s2;
    if(s1==s2){
        cout<<s1<<endl;
        return;
    }
    int a[27], a1[27];
    for(int i=0; i<s1.size(); i++){
        a[s1[i]-'a']++;
    }
    for(int i=0; i<s1.size(); i++){
        a1[s1[i]-'a']++;
    }
    for(int i=0; i<27; i++)
        cout<<a[i]<<" ";NL;
    for(int i=0; i<27; i++)
        cout<<a1[i]<<" ";NL;
    
}
 
int main() {
#ifdef INSANE
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);
   freopen("out.txt", "w", stdout);
#endif
  
    FASTERIO; // comment when use scanf and printf 
    int tt; cin>>tt; 
    while(tt--)
    solve();

#ifdef INSANE
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}