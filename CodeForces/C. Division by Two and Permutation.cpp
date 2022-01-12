#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
// #define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define MaxN                     1000000
#define EPS                      1e-18
#define dpoint(x)                fixed<<setprecision(x)
#define Fill(ar, weight)         memset(ar, weight, sizeof(ar))
typedef long long int            ll;
typedef double                   dl;
typedef unsigned long long int   ull;


void solve() {
    int n; cin>>n;
    vector<int>v(n), frek(n+1);


    for(int i=0; i<n; i++){
        cin>>v[i];
        while(v[i]>n)
            v[i]=v[i]/2;
            frek[v[i]]++;
    }
    bool flg = false;

    for(int i=n; i>0; i--){
        if(frek[i]==0){
            flg = true;
            break;
        }
        frek[i/2]+=frek[i]-1;
    }

    // for(int i=1; i<n+1; i++)cout<<frek[i]<<" ";
    //     cout<<endl;
    // for(int i=0; i<n; i++)cout<<v[i]<<" ";
    //     cout<<endl;
    if(!flg)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {

#ifdef wordsworth
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("ans.txt", "w", stdout);
#endif

    FASTERIO;

    int tt; cin >> tt;
    while (tt--) {
        solve();
    }

#ifdef wordsworth
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}