#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define maxN                     45000
#define EPS                      1e-18
#define dpoint(x)                fixed<<setprecision(x)
#define Fill(ar, val)            memset(ar, val, sizeof(ar))
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

long np, L, R;
bool isP[maxN];
vector<int> prime;

void Sieve() {
    Fill(isP, true);
    isP[0] = isP[1] = false;
    for (int i=4; i<maxN; i+=2) isP[i] = false;
    for (int i=3; i*i<maxN; i+=2)
        if (isP[i]) for (int j=i*i; j<maxN; j+=i+i)
            isP[j] = false;
    prime.pb(2);
    for (int i=3; i<maxN; i+=2)
        if (isP[i]) prime.pb(i);
    np = prime.size();
}

bool isPrime(int n) {
    if (n<maxN) return isP[n];
    for (int i=0, lm=(int)sqrt(n); i<np && prime[i]<=lm; i++)
        if (n%prime[i]==0) return false;
    return true;
}

int nextPrime(long long u) {
    for (++u; u<=R; u++)
        if (isPrime(u)) return (int)u;
    return -1;
}

int main() {

#ifdef HOME
    clock_t tStart = clock();
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    FASTERIO;

    Sieve();
   
    while(cin>>L>>R){
        ll last = nextPrime(L-1), next=0, Max=0, Min=500000000, ax, ay, bx, by;
        if(last!=-1)while(1){
            next = nextPrime(last);
            if(next==-1)break;
            if(next-last>Max){
                Max = next-last;
                ax = last, ay = next;

            }
            if(next-last<Min){
                Min = next-last;
                bx = last, by = next;
            }
            last = next;
        }
        if(Max==0)cout<<"There are no adjacent primes."<<endl;
        else cout<<bx<<","<<by<<" are closest, "<<ax<<","<<ay<<" are most distant."<<endl;
    }

#ifdef HOME
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}