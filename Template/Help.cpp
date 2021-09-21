#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define mx                       100005
#define EPS                      1e-10
#define dpoint(x)                fixed<<setprecision(x)
typedef long long int            ll;
typedef double                   dl;
typedef unsigned long long int   ull;

int main()
{
#ifdef anikakash
    freopen("INPUT.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t; cin >> t;
    for (int i = 1; i <= t; i++) {
        int x; cin >> x;
        if ((x & 1)) {
            cout << "Case " << i << ": Impossible" << endl;
        } else {
            int k, j;
            for (k = 3; k <= x; k += 2) {
                for (j = 2; j <= x; j += 2)
                    if (k * j == x) {
                        cout << "Case " << i << ": " << k << " " << j << endl;
                        break;
                    }
            }
        }
    }
    return 0;
}
