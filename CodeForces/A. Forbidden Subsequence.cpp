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

//Funtions
template <class T> T digitsum(T n) {T sum = 0; while (n != 0) {sum += n % 10; n /= 10;} return sum;}
template <class T> T gcd(T a, T b) { T x ; return x = __gcd(a, b);}
template <class T> T lcm(T a, T b) {T y; return y = ((a) * (b)) / gcd(a, b);}

// Debugger
#define gobug                   0
#define debugNS(a,b,c)          cout<<a<<b<<c<<endl;
#define debugN(b)               cout<<b<<endl;


int main() {

#ifdef anikakash
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("ans.txt", "w", stdout);
#endif

    FASTERIO;

    int tt; cin >> tt;
    while (tt--) {
        string s1, s2; cin >> s1 >> s2;
        sort(s1.begin(), s1.end());
        vector<int>mp(26, 0);
        for (int i = 0; i < s1.size(); i++) {
            char c = s1[i];
            mp[c - 'a']++;
        }
        if (s2 != "abc" || !mp[0] || !mp[1] || !mp[2] )cout << s1 << endl;
        else {
            while (mp[0]--)cout << 'a';
            while (mp[2]--)cout << 'c';
            while (mp[1]--)cout << 'b';
            for (int i = 3; i < 26; i++) {
                while (mp[i]--)cout << char('a' + i);
            }
            cout << '\n';
        }
    }

#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}