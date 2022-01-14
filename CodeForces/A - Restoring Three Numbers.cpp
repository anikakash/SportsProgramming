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
    vector<int>v(4);
    for(int i=0; i<4; i++)cin>>v[i];
        sort(v.begin(), v.end());
    cout<<(int)v[3]-v[2]<<" "<<(int)v[3]-v[1]<<" "<<(int)v[3]-v[0]<<endl;
}

int gate=0;
int main() {

#ifdef wordsworth
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    FASTERIO;

    if(gate){
        int tt; cin >> tt;
        while (tt--) {
            solve(); 
        }
    }
    else solve();

#ifdef wordsworth
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}