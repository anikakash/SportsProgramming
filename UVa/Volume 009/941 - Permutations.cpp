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


ll fact[21];
ll fun(int n) {
    return !n ? fact[n] = 1ll : fact[n] = n * fun(n - 1);
}

int main() {

#ifdef anikakash
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    FASTERIO;

    fun(20);

    int tt; cin >> tt;
    while (tt--) {
        string s, ans = ""; cin >> s;
        ll n; cin >> n;
        sort(s.begin(), s.end());

        // ll xx = fact[s.size()-1];
        // ll ans = n/xx;
        // cout<<s[ans]<<endl;
        // s.erase(s.begin()+n/xx);
        // cout<<s<<endl;
        while (s.size()) {
            ll xx = fact[s.size() - 1];
            if (n / xx < s.size()) {
                ans += s[n / xx];
                s.erase(s.begin() + n / xx);
                n %= xx;
            }
            else {
                ans += s; break; //for last one
            }
        }
        cout << ans << endl;
    }

#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}

/*
This one may help you for understandt implement this code;
https://youtu.be/wT7gcXLYoao
*/