#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define mx                       1000005
#define EPS                      1e-18
#define dpoint(x)                fixed<<setprecision(x)
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

string DecimalToBinary(int n) {

    string res = "";
    for (int i = 31; i >= 0; i--) {
        int k = n & (1 << i);
        res += (n & k) ? '1' : '0';
    }
    return res;
}
int BinaryToDecimal(string s) {
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        ans = (2 * ans) + s[i] - '0';
    }
    return ans;
}
bool cmp(pair<int, int>a, pair<int, int>b) {
    if (a < b)return true;
    return false;
}

ll findTrailingZeros(ll n)
{
    ll count = 0;
    for (ll i = 5; n / i >= 1; i *= 5)
        count += n / i;
    return count;
}

int par[mx];
int sz[mx];
int max_size = INT_MIN;

int root(int u) {
    if (par[u] != u) return par[u] = root(par[u]);
    else return u;
}

void marge(int p, int q) {
    if (sz[p] >= sz[q]) {
        sz[p] += sz[q];
        par[q] = p;
        max_size = max(max_size, sz[p]);
    }
    else {
        sz[q] += sz[p];
        par[p] = q;
        max_size = max(max_size, sz[q]);
    }
}
ll pur(ll n) {
    ll ans = 1;
    for (ll i = 1; i <= 2 * n; i++) {
        ans = (ans % 1000000007 * i % 1000000007) % 1000000007;
    }
    return ans / 2ll;
}
ll t;
ll checke(ll n) {
    while (n) {
        int mod = n % 10;
        n /= 10;
        if (mod == t) return 0;
    }
    return 1;
}

void GameChanger(string &s, char c, char b) {
    ll tmp = stoi(s);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) {
            s[i] = ++c;
            for (int j = i + 1; j < s.size(); j++) {
                s[j] = b;
            }
            break;
        }
    }
    ll num = stoi(s);
    cout << num - tmp << endl;
}

void sort_ascending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j])swap(arr[i], arr[j]);
        }
    }
}

int main() {

#ifdef anikakash
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("tmp.txt", "w", stdout);
#endif

    FASTERIO; //cmt when use scanf & printf ;

    string s1, s2; 
    cin>>s1>>s2;
    int n=0;
    for(int i=0; i<s1.size(); i++){
        n = n*10+(s1[i]-'0');
    }
    for(int i=0; i<s2.size(); i++){
        n = n*10+(s2[i]-'0');
    }
    int x = sqrt(n);
    if((x*x)==n)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}