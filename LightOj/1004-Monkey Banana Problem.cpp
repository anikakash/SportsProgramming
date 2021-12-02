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
// #define Fill(ar, weight)            memset(ar, weight, sizeof(ar))
typedef long long int            ll;
typedef double                   dl;
typedef unsigned long long int   ull;


int main() {

#ifdef anikakash
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("ans.txt", "w", stdout);
#endif

    FASTERIO;
    int tt; cin >> tt;
    for (int caseno = 1; caseno <= tt; caseno++) {
        ll n, cnt = 2; cin >> n;
        ll arr[2 * n + 2][2 * n + 2] = {0};
        ll dp[2 * n + 2][2 * n + 2] = {0};

        for (int i = 1; i <= 2 * n - 1; i++) {
            int xx = i;
            if (xx > n) {
                xx -= cnt;
                cnt += 2;
            }
            for (int j = 1; j <= xx; j++) {
                cin >> arr[i][j];
            }
        }
        dp[1][1] = arr[1][1];
        for (int i = 2; i <= 2 * n - 1; i++) {
            for (int j = 1; j <= 2 * n - 1; j++) {
                if (i <= n) {
                    if (j == 1)dp[i][j] = arr[i][j] + dp[i - 1][j];
                    else {
                        dp[i][j] = max(dp[i - 1][j - 1] + arr[i][j], dp[i - 1][j] + arr[i][j]);
                    }
                }
                else{
                    dp[i][j] = max(dp[i - 1][j] + arr[i][j], dp[i - 1][j+1] + arr[i][j]);
                }
            }
        }
        cout << "Case " << caseno << ": " << dp[2 * n - 1][1] << endl;
    }


#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}