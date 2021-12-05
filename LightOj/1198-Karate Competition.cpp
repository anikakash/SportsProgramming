#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
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

const int MAXN = 50 + 3;
int a[MAXN], b[MAXN];
int memo[MAXN][MAXN];

int main() {

#ifdef HOME
    clock_t tStart = clock();
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    int dp[55][55]={0};
   
        int tt; cin>>tt;

        for(int caseno=1; caseno<=tt; caseno++){

            int n; cin>>n;

            for(int i=0; i<=n; i++){
                for(int j=0; j<=n; j++){
                    dp[i][j]=0;
                } 
            }


            vector<int>v1(n),v2(n);
            for(int i=0; i<n; i++)cin>>v1[i];
            for(int i=0; i<n; i++)cin>>v2[i];

                sort(v1.begin(), v1.end(), greater<int>());
                sort(v2.begin(), v2.end(), greater<int>());

                int point = 0;
            for(int i=1; i<=n; i++){
                for(int j=1; j<=n; j++){
                    if(v1[i-1]>v2[j-1])point = 2;
                    else if(v1[i-1]==v2[j-1]) point = 1;
                    else point = 0;

                    dp[i][j] = max(dp[i-1][j], max(dp[i][j-1], dp[i-1][j-1]+point));
                }
            }
            // for(int i=0; i<=n; i++){
            //     for(int j=0; j<=n; j++){
            //         cout<<dp[i][j]<<" ";
            //     } 
            //     cout<<endl;
            // }
                cout<<"Case "<<caseno<<": "  <<dp[n][n]<<endl;
        }


#ifdef HOME
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}