#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define mx                       10000005
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



int main() {

#ifdef anikakash
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    FASTERIO; //cmt when use scanf & printf ;

    int mass[10], c, s, cnt=1;

    while(cin>>c){
        cin>>s;
        dl sum=0, imbalance=0;
        for(int i=0; i<s;i++){
            cin>>mass[i];
            sum+=mass[i];
        }
        for(int i=s; i<2*c; i++)mass[i]=0;

        sort(mass, mass+(2*c));

        sum/=c; 
        cout<<"Set #"<<cnt++<<endl;
        for(int i=0; i<c;i++){
            cout<<" "<<i<<":";
            if(mass[i])cout<<" "<<mass[i];
            if(mass[2*c-i-1])cout<<" "<<mass[2*c-i-1];
            NL;
            imbalance+=abs(sum-mass[i]-mass[2*c-i-1]);
        }
        cout<<"IMBALANCE = "<<dpoint(5)<<imbalance<<endl<<endl;
    }


#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}