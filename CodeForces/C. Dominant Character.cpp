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
        int n; cin>>n;
        string s; cin>>s;
        int a=0, b=0, c=0, d=0;
        for(int i=0; i<n; i++){
            if(s[i]=='a' && s[i+1]=='a')a=1;
            if(s[i]=='a' && s[i+2]=='a' && i<(n-1))b=1;
            if(s[i]=='a' && s[i+3]=='a' && s[i+1]!=s[i+2] && i<(n-2))c=1;
            if(s[i]=='a' && s[i+3]=='a' && s[i+6]=='a' && s[i+2]!=s[i+4] && s[i+2]!=s[i+5] && i<(n-6))d=1;
        }
        if(a==1)cout<<2<<endl;
        else if(b==1)cout<<3<<endl;
        else if(c==1)cout<<4<<endl;
        else if(d==1)cout<<7<<endl;
        else cout<<-1<<endl;
    }

#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}