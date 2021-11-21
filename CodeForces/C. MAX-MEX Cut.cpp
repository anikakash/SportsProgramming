#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define MaxN                     33000
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

vector<ll>prime;
bool vis[MaxN];  //MaxN is define in above of the code;
void sieve() {
    ll x=sqrt((int)MaxN);
    for(ll i=3; i<=x; i+=2) {
        if(vis[i]==0) {
            for(ll j=i*i; j<MaxN; j+=2*i)
                vis[j]=1;
        }
    }
    prime.pb(2);
    for(ll i=3; i<MaxN; i+=2)
        if(vis[i]==0)
            prime.pb(i);
}

vector<int>prime_factor;
void primeFactorization(int n)
{
      for(int i=0; prime[i]*prime[i]<=n; i++)
      {
          if(n%prime[i]==0)
          {
              while(n%prime[i]==0)
              {
                  n/=prime[i];
                  prime_factor.pb(prime[i]); 
              }
          }
      }
    if(n>1)prime_factor.pb(n);
}

vector<vector<int>> Determinate_Prime;

void calculate(){
	for(int i=2; i<prime.size(); i++){
		vector<int>arr;
		if(prime[i]-prime[i-1] == prime[i-1]-prime[i-2]){
			arr.pb(prime[i-2]);
			arr.pb(prime[i-1]);
			arr.pb(prime[i]);
			if(i+1 <prime.size()){
			   if(prime[i]-prime[i-1] == prime[i-1]-prime[i-2] == prime[i+1]-prime[i]){
			   		arr.pb(prime[i+1]);
			   		// i++;
			   }
			}
		}
		Determinate_Prime.pb(arr);
	}
}

int main() {

#ifdef HOME
    clock_t tStart = clock();
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    FASTERIO;

    // sieve(); calculate();

    int tt; cin>>tt;
    while(tt--){
    	int n,j=0, k=-1, ans=0; cin>>n;
    	string s1, s2; cin>>s1>>s2;
    	for(int i=0; i<n; i++){
    		if(s1[i]!=s2[i]){ans+=2; k=-1;}
    		else if(s1[i]=='1' && k==0){ans++; k=-1;}
    		else if(s1[i]=='1')k=1;
    		else if(s1[i]=='0' && k==1){ans+=2; k=-1;}
    		else{ ans++; k=0;}
    	}
    	cout<<ans<<endl;
    }

#ifdef HOME
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}