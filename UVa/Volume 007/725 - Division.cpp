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

int UniqueChecker(int a, int b){
    map<int,int>mark;
    while(a){
        mark[a%10]++;
        a/=10;
    }
    while(b){
        mark[b%10]++;
        b/=10;
    }
    if(mark.size()!=10)return false;
    for(map<int,int>::iterator it = mark.begin(); it!=mark.end(); it++)
        if(it->second !=1) return false;

    return true;
}
int main(){
   
  #ifdef anikakash
       clock_t tStart = clock();
       freopen("INPUT.txt","r",stdin);
       freopen("OUTPUT.txt","w",stdout);
  #endif

    FASTERIO;
        
        int a,n,af,bf, cnt=0;
        while(cin>>n){
            if(n==0)break;
            bool hasans = false;
            if(cnt++)NL;
            for(int i=1234; i<=99999; i++){
               a = i*n;
               if(a>99999)break;
               if(a<10000)af=a*10;
               else af = a;

               if(i<10000)bf=i*10;
               else bf = i;
              if(UniqueChecker(af,bf)){
                    if(a<10000)cout<<"0"<<a<<" / "<<i<<" = "<<n<<endl;
                    else if(i<10000)cout<<a<<" / "<<"0"<<i<<" = "<<n<<endl;
                    else cout<<a<<" / "<<i<<" = "<<n<<endl;
                hasans = true;
              }
               
            }
           if(!hasans)cout<<"There are no solutions for "<<n<<"."<<endl;
        }

  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif
   return 0;
}
/*
    1, 4, 5, 9

*/