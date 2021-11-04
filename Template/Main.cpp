#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
// #define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define MaxN                     100005
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


int n;
int par[MaxN];
int sz[MaxN];

int findPar(int v) {
    if (par[v] == v) return v; //base
    return par[v] = findPar(par[v]); //recursion plus saving
}

struct node {
    int u, v, z;
};
bool cmp(node a, node b) {
    return a.z < b.z;
}
void join(int p, int q) {

    if (sz[q] >= sz[p]) {
        par[p] = q; //q is the new parant
        sz[q] += sz[p];
    }
    else {
        par[q] = p; //q is the new parant
        sz[p] += sz[q];
    }
}


void bobule_sort(float arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<=n-1; j++){
            if(arr[i]>arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main() {

#ifdef anikakash
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    // FASTERIO;

     int n; cin>>n;

    int weight[n + 7], price[n];
    float tk[n + 7], arr[n + 7];

    for (int i = 0; i < n; i++) cin>>weight[i];
    for (int i = 0; i < n; i++) cin>>price[i];

    for (int i = 0; i < n; i++) {
        tk[i] = (float)price[i] / weight[i];
        // cout<<tk[i]<<endl;
        arr[i] = tk[i];
    }
    bobule_sort(arr,n);

    int w;cin>>w;


    float sum = 0;
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            if (arr[i] == tk[j] && weight[j] <= w && w > 0) {
                sum += price[j];
                w -= weight[j];
                tk[j] = -1;
            }
            else if (arr[i] == tk[j] && weight[j] >= w && w != 0) {
                sum += w * arr[i];
                w = 0;
            }
        }
    }

    cout<<dpoint(2)<<sum<<endl;
    
#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}