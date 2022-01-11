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
    vector<ll>v(3);
    for (int i = 0; i < 3; i++)cin >> v[i];

    int diff = v[1] - v[0];
    int ch = v[1] + diff;
    if (ch % v[2] == 0 && ch / v[2] > 0) {
        cout << "YES" << endl;
        return;
    }

    diff = v[2] - v[1];
    ch = v[1] - diff;
    if (ch % v[0] == 0 && ch / v[0] > 0) {
        cout << "YES" << endl;
        return;
    }

    diff = v[2] - v[0];
    if (diff % 2 == 0) {
        // cout << diff << endl;
        ch = v[0] + (diff / 2);
        if (ch % v[1] == 0 && ch / v[1] > 0) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main() {

#ifdef anikakash
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("ans.txt", "w", stdout);
#endif

    FASTERIO;

    int tt; cin >> tt;
    while (tt--) {
        solve();
    }
#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}