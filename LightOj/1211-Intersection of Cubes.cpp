#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define mx                       46500
#define EPS                      1e-18
#define dpoint(x)                fixed<<setprecision(x)
#define Fill(ar, val)            memset(ar, val, sizeof(ar))
typedef long long int            ll;
typedef double                   dl;
typedef unsigned long long int   ull;

//Funtions
template <class T> T digitsum(T n) {T sum = 0; while (n != 0) {sum += n % 10; n /= 10;} return sum;}
int gcd(int a, int b) { int x ; return x = __gcd(a, b);}
int lcm(int a, int b) {int y; return y = ((a) * ((b) / gcd(a, b)));}

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


bool cmp(pair<int, int>a, pair<int, int>b) {
    if (a < b)return true;
    return false;
}


int main() {

#ifdef anikakash
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

     
    int tt;  scanf("%d",&tt);
    for(int caseno = 1; caseno<=tt; caseno++){
        int x1, x2, y1,y2,z1,z2;
        int xlow=0, xhigh=1005, ylow=0, yhigh=1005, zlow=0, zhigh=1005;
        int n; scanf("%d",&n);
        for(int i=0; i<n; i++){
            scanf("%d %d %d %d %d %d",&x1,&y1,&z1, &x2, &y2, &z2);

            xlow = max(xlow,x1);
            xhigh = min(xhigh,x2);

            ylow = max(ylow,y1);
            yhigh = min(yhigh,y2);

            zlow = max(zlow,z1);
            zhigh = min(zhigh,z2);

        }
        int ans = (xhigh-xlow)*(yhigh-ylow)*(zhigh-zlow);
        printf("Case %d: %d\n", caseno, ans>0? ans:0);
    }


#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}