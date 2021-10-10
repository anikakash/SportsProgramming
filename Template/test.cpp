#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define mx                       100000
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

vector<ll>prime;
bool vis[mx];  //mx is define in above of the code;
void sieve() {
    ll x=sqrt((int)mx);
    for(ll i=3; i<=x; i+=2) {
        if(vis[i]==0) {
            for(ll j=i*i; j<mx; j+=2*i)
                vis[j]=1;
        }
    }
    prime.pb(1);
    prime.pb(2);
    for(ll i=3; i<mx; i+=2)
        if(vis[i]==0)
            prime.pb(i);
}
vector<int>nprime;
void push(int n){
    for(int i=0; i<n; i++){
        if(prime[i]<=n)nprime.pb(prime[i]);
    }
}
int main() {

#ifdef anikakash
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    FASTERIO; //cmt when use scanf & printf ;

    sieve();
    int n,c;
    while(cin>>n>>c){
        push(n);
        
        int sz = nprime.size();
        // cout<<"Size : "<<sz<<endl;
        cout<<n<<" "<<c<<":";
        if(sz%2==0){
            int pp = 2*c, cnt=0;
            int cut = sz-pp;
            for(int i = 0; i<sz; i++){
                if((i>=(cut/2)) && (cnt<pp) ){
                    cout<<" "<<prime[i];
                    cnt++;
                }
            }
             NL;NL;
        }
        else{
            int pp = (2*c)-1, cnt=0;
            int cut = sz-pp;
            for(int i = 0; i<sz; i++){
                if((i>=(cut/2)) && (cnt<pp) ){
                    cout<<" "<<prime[i];
                    cnt++;
                }
            }
             NL;NL;
        }
        nprime.clear();
    }


#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}