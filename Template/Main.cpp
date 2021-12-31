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

int ROW[] = { +0, +0, -1, +1};
int COL[] = { +1, -1, +0, +0};

int X[] = { +0, +0, +1, -1, -1, +1, -1, +1}; // Kings Move
int Y[] = { -1, +1, +0, +0, +1, +1, -1, -1}; // Kings Move

int KX[] = { -2, -2, -1, -1,  1,  1,  2,  2}; // Knights Move
int KY[] = { -1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move


ll factorial[21];

ll fact(ll n) {
    return !n ? factorial[n] = 1ll : factorial[n] = n * fact(n - 1);
}

ll sq(ll n, ll p) {
    ll xx = 1;
    for (ll i = 1; i <= p; i++)xx *= n;
    return xx;
}


int main() {

#ifdef anikakash
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("tt.txt", "w", stdout);
#endif

    FASTERIO;

   int tt; cin>>tt;
   while(tt--){
        string s="", s1, s2; cin>>s1>>s2;
        ll  i=s1.size()-1, j=s2.size()-1;

        
        while(1){
            if(s1[i]>s2[j]){
               if(j-1<0 || i<0)break;
               ll nn = s2[j-1]-'0';
               nn = (nn*10)+s2[j]-'0';
               ll np = s1[i]-'0';
               ll ans = nn-np;
               s+=to_string(ans);
               j-=2; i--;
            }
            else if(s1[i]<=s2[j]){
                if(j<0 || i<0)break;
                ll nn = s2[j]-'0';
                ll np = s1[i]-'0';
                ll ans = nn-np;
                s+=to_string(ans);
                i--; j--;
            }
        }
        reverse(s.begin(), s.end());
        bool flg = false;
        for(int i=0; i<s.size(); i++){
            if(s[i]!='0' || flg){
                cout<<s[i];
                flg=true;
            }
        }
            cout<<'\n';
   }

#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}