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


int ROW[] = { +0, +0, -1, +1};
int COL[] = { +1, -1, +0, +0};

int X[] = { +0, +0, +1, -1, -1, +1, -1, +1}; // Kings Move
int Y[] = { -1, +1, +0, +0, +1, +1, -1, -1}; // Kings Move

int KX[] = { -2, -2, -1, -1,  1,  1,  2,  2}; // Knights Move
int KY[] = { -1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move


int t=0, n;
int circle[20];
bool used[20];
bool is_prime(int p){
    for(int i=2; i<=sqrt(p); i++){
        if(p%i==0)return false;
    }
    return true;
}

void search(int m){
    if(m == n-1 && is_prime(circle[n-1]+circle[n])){
        for(int i=0; i<n; i++){
            if(i!=n-1)cout<<circle[i]<<' ';
            else cout<<circle[i];
        }
          cout<<endl;
        return;
    }
    for(int i=2; i<=n; i++){
       if(!used[i] && is_prime(circle[m] + i)) {
            used[i] = true;
            circle[m + 1] = i;
            search(m + 1);
            used[i] = false;
        }
    }
}

int main() {

#ifdef HOME
    clock_t tStart = clock();
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

while(cin>>n){
    t++;
    if(t>1)cout<<endl;
    circle[0] = circle[n] = 1;
    cout<<"Case "<<t<<":"<<endl;
    search(0);
}



#ifdef HOME
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}