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
    freopen("tt.txt", "w", stdout);
#endif

    FASTERIO;

   int tt; cin>>tt;
   while(tt--){
       ll a, s;cin>>a>>s;
       ll ra, rb, rs, ans=0;
       int p=0; 
       bool f = true;
       while(a>0 || s>0){
            if(a>0){
                ra = a%10;
                a = 1LL*a/10;
            }
            else ra = 0;

            rs = s%10;

            if(ra>rs){
                rs = s%100;
                s = 1LL*s/100;
            }
            else s = 1LL*s/10;

            rb = rs - ra;
            if(rb>9 || rb <0 ){
                cout<<-1<<endl;
                f = false; break;
            }
            else {
                ans+= pow(10,p)*1LL*rb;
                p++;
            }
       }
       if(f)cout<<ans<<endl;
   }

#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}