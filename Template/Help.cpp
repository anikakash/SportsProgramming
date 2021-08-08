#include<bits/stdc++.h>
using namespace    std;

#define flush                   cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                      cout<<'\n';
#define pi                      acos(-1.0) //3.1415926535897932384626
#define pb                      push_back
#define mx                      10000007
#define EPS                     1e-10
#define dpoint(x)               fixed<<setprecision(x)
typedef long long int           ll;
typedef double                  dl;
typedef unsigned long long      ul;

// Debugger
#define debugNS(a,b)             cout<<a<<" = "<<b<<endl;
#define debugN(b)               cout<<b<<endl;

int dx[] = {0, 0, -1, 1, -1, -1, 1, 1}; //Graph Move;
int dy[] = {1, -1, 0, 0, -1, 1, -1, 1};

int main(){
   
  #ifdef anikakash
       clock_t tStart = clock();
       freopen("INPUT.txt","r",stdin);
       freopen("OUTPUT.txt","w",stdout);
  #endif

    FASTERIO;
       
     int t;
     cin>>t;
     while(t--){
        long int n;
        cin>>n;
        int tmp = n%10;
        n/=10;
        if(tmp==9)n++;
        cout<<n<<endl;
    }
    

       
  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif
   return 0;
}