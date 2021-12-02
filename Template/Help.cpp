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


void bobule_sort(float arr[], int n) {
   for (int i = 0; i < n; i++) {
      for (int j = i + 1; j <= n - 1; j++) {
         if (arr[i] > arr[j]) {
            swap(arr[i], arr[j]);
         }
      }
   }
}
void Mata_Nosto(ll n) {
   if (n >= 10000000) {
      Mata_Nosto(n / 10000000);
      cout << " kuti";
      n %= 10000000;
   }
   if (n >= 100000) {
      Mata_Nosto(n / 100000);
      cout << " lakh";
      n %= 100000;
   }
   if (n >= 1000) {
      Mata_Nosto(n / 1000);
      cout << " hajar";
      n %= 1000;
   }
   if (n >= 100) {
      Mata_Nosto(n / 100);
      cout << " shata";
      n %= 100;
   }
   if (n)cout << " " << n;
}


vector<ll>prime, ans;
bool vis[MaxN];  //MaxN is define in above of the code;
int is_prime(ll n)
{
   ll i, root;
   if (n == 2) return 1;
   if (n % 2 == 0 || n == 1) return 0;

   root = sqrt(n);

   for (i = 3; i <= root; i = i + 2)if (n % i == 0)  return 0;

   return 1;
}

void sieve() {
   ll x = sqrt((int)MaxN);
   for (ll i = 4; i < MaxN; i += 2)vis[i] = 1;
   for (ll i = 3; i <= x; i += 2) {
      if (vis[i] == 0) {
         for (ll j = i * i; j < MaxN; j += 2 * i)
            vis[j] = 1;
      }
   }
   prime.pb(0);
   prime.pb(0);
   prime.pb(1);
   ans.pb(0);
   ans.pb(0);
   ans.pb(2);
   int cnt = 1;
   for (ll i = 3; i < MaxN; i++) {
      if (vis[i] == 0) {
         int sum = digitsum(i);
         if (is_prime(sum)) {
            // prime.pb(i);
            ans.pb(i);
            cnt++;
            prime.pb(cnt);
            // cout<<i<<" "<<cnt<<endl;
         }
         else {
            prime.pb(cnt);
            ans.pb(0);
         }
      }
      else {
         prime.pb(cnt);
         ans.pb(0);
      }
   }
}

ll factorial[21];

ll fact(ll n) {
   return !n ? factorial[n] = 1ll : factorial[n] = n * fact(n - 1);
}
int anik(int best, int first, int second) {
   return max(0, max(first, second) + 1 - best);
}
void insertion_sort(vector<int>arr) {

   for (int i = 0; i < arr.size(); i++) {
      int sm = arr[i];
      int j = i - 1;
      while (j >= 0 && arr[j] > sm) {
         arr[j + 1] = arr[j];
         j = j - 1;
      }
      arr[j + 1] = sm;
   }
   for (auto it : arr)cout << it << " ";
}



int main() {

#ifdef anikakash
   clock_t tStart = clock();
   freopen("input.txt", "r", stdin);
   freopen("ans.txt", "w", stdout);
#endif

   FASTERIO;
   
   int n = 106%3;
   cout<<n<<endl;

#ifdef anikakash
   fprintf(stderr, "\n >> Runtime: % .10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
   return 0;
}