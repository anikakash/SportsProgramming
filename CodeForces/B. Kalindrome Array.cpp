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




bool solve(vector<int>&arr) {
    int rem = -1;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            rem = arr[i];
            break;
        }
    }
    
    vector<int>tmp;
    for (auto it : arr)if (it != rem)tmp.pb(it);

    int ss = tmp.size();
    for (int i = 0; i < ss; i++) {
        if (tmp[i] != tmp[ss - 1 - i]) {
            return false;
        }
    }
    return true;
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

         int n; cin >> n;
         vector<int>arr(n);
        for (int i = 0; i < n; i++)cin>>arr[i];

        bool flg = solve(arr);
        if(!flg){
            reverse(arr.begin(), arr.end());
            flg = solve(arr);
        }

        if (flg)cout << "YES" << endl;
        else cout << "NO" << endl;
       
    }

#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}