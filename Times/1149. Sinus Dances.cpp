#include<bits/stdc++.h>
using namespace    std;

#define flush                   cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                      cout<<'\n';
#define pi                      acos(-1.0) //3.1415926535897932384626
#define pb                      push_back
#define mx                      10000007
#define AC                      int
#define EPS                     1e-10
#define dpoint(x)               fixed<<setprecision(x)
typedef long long int           ll;
typedef double                  dl;
typedef unsigned long long      ul;
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
int gcd(int a, int b){ int x ; return x = __gcd(a, b);}
int lcm(int a, int b){int y; return y = ((a)*((b)/gcd(a,b)));}

// Debugger
#define debugNS(a,b)             cout<<a<<" = "<<b<<endl;
#define debugN(b)               cout<<b<<endl;


void An(int i,int n){
    if(i==n+1)return;
    cout<<"sin("<<i;
    if(i%2==1 && i!=n)cout<<"-";
    else if(i%2==0 && i!=n) cout<<"+";
    An(i+1, n);
    cout<<")";
}
void Sn(int i, int n){
    if(n==0)return;
    An(1,i);
    //cout<<")";
    cout<<"+"<<n;
    if(n>1)cout<<")";
    Sn(i+1,n-1);
}
int main(){
   
  #ifdef anikakash
       clock_t tStart = clock();
       freopen("INPUT.txt","r",stdin);
       freopen("OUTPUT.txt","w",stdout);
  #endif

    FASTERIO;
        int n; cin>>n;
        //An(1,n);
        
        for(int i=1; i<n; i++)
            cout<<"(";
        Sn(1,n);
        NL;

  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif
   return 0;
}
/*
   


*/