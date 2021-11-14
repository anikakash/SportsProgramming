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

//Funtions
template <class T> T digitsum(T n) {T sum = 0; while (n != 0) {sum += n % 10; n /= 10;} return sum;}
template <class T> T gcd(T a, T b) { T x ; return x = __gcd(a, b);}
template <class T> T lcm(T a, T b) {T y; return y = ((a) * (b)) / gcd(a, b);}

// Debugger
#define gobug                   0
#define debugNS(a,b,c)          cout<<a<<b<<c<<endl;
#define debugN(b)               cout<<b<<endl;

int ROW[] = { +0, +0, -1, +1};
int COL[] = { +1, -1, +0, +0};

int X[] = { +0, +0, +1, -1, -1, +1, -1, +1}; // Kings Move
int Y[] = { -1, +1, +0, +0, +1, +1, -1, -1}; // Kings Move

int KX[] = { -2, -2, -1, -1,  1,  1,  2,  2}; // Knights Move
int KY[] = { -1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move


int main() {

#ifdef anikakash
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    FASTERIO;

     int tt; cin >> tt;
    while (tt--) {
        string s; cin >> s;
        flush;
        ll n, i = 1, tmp=0; cin >> n;
        tmp = n;
        vector<int>arr;
        while (n) {
            int x = n % i;
            arr.pb(x);
            n /= i;
            i++;
        }
        reverse(arr.begin(), arr.end());
        // for(auto it:arr)cout<<it<<" ";
        sort(s.begin(), s.end());
 
        if (arr.size() < s.size()) {
            while(tmp--){
                next_permutation(s.begin(), s.end());
            }
            cout<<s;
        }
        else {
            for (int i = 0; i < arr.size(); i++) {
                cout << s[arr[i]];
                string ss = "";
                for (int j = 0; j < s.size(); j++) {
                    if (s[arr[i]] == s[j])continue;
                    else ss += s[j];
                }
                s.clear(); s = ss; ss.clear();
            }
        }
        cout << endl;
    }

#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}