#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define mx                       100005
#define EPS                      1e-10
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


int main() {

#ifdef anikakash
    clock_t tStart = clock();
    freopen("INPUT.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    FASTERIO; //cmt when use scanf & printf ;

    int d, s;
    while (cin >> d >> s) {
        if (d == 0 && s == 0)return 0;
        vector<int>dak;
        vector<int>sol;
        for (int i = 0; i < d; i++) {
            int x; cin >> x;
            dak.pb(x);
        }
        for (int i = 0; i < s; i++) {
            int x; cin >> x;
            sol.pb(x);
        }

        sort(dak.begin(), dak.end());
        sort(sol.begin(), sol.end());

        // cout<<dak.size()<<" "<<sol.size()<<endl;
        // for(auto it:dak)cout<<it<<endl;
        // for(auto it:sol)cout<<it<<endl;

        int i = 0, j = 0, sum = 0, flg = 0;

        while (i < d) {
            if (j == s) {
                flg = 1; break;
            }
            else if (dak[i] <= sol[j]) {
                sum += sol[j];
                i++; j++;
            }
            else j++;
        }
        if (flg)cout << "Loowater is doomed!" << endl;
        else cout << sum << endl;
    }

#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}