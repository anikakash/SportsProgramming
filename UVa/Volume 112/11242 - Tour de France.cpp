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
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
int gcd(int a, int b){ int x ; return x = __gcd(a, b);}
int lcm(int a, int b){int y; return y = ((a)*((b)/gcd(a,b)));}

// Debugger
#define debugNS(a,b)             cout<<a<<" = "<<b<<endl;
#define debugN(b)               cout<<b<<endl;

string DecimalToBinary(int n){

    string res="";
    for(int i=31; i>=0; i--){
        int k = n & (1<<i);
        res += (n&k)?'1':'0';
    }
    return res;
}
int BinaryToDecimal(string s){
    int ans = 0;
    for(int i=0; i<32; i++){
        ans = (2*ans)+s[i]-'0';
    }
    return ans;
}

int is_prime(ll n)
{
    ll i, root;
    if(n==2) return 1;
    if(n%2==0 || n==1) return 0;

    root = sqrt(n);
    
    for(i=3; i<=root; i = i+2)if(n%i==0)  return 0;
    
    return 1;
}
int main(){
   
  #ifdef anikakash
       clock_t tStart = clock();
       freopen("INPUT.txt","r",stdin);
       freopen("OUTPUT.txt","w",stdout);
  #endif

    FASTERIO;
    
   int n;
   while(cin>>n){
    if(n==0)return 0;
        int m;
        cin>>m;
        int f[15],r[15];

        for (int i = 0; i < n; ++i)cin>>f[i];
        for (int i = 0; i < m; ++i)cin>>r[i];

            vector<dl>arr;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                arr.pb(1.0*f[i]/r[j]);
            }
        }
        sort(arr.begin(), arr.end());
        dl MAX = 0;
        for (int i = 0; i < arr.size()-1; ++i)
         MAX = max(MAX,arr[i+1]/arr[i]);
        cout<<dpoint(2)<<MAX<<endl;
   }

  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif
   return 0;
}