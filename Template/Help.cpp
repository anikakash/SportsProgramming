#include<bits/stdc++.h>
using namespace    std;

#define flush                   cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                      '\n';
#define pi                      acos(-1.0) //3.1415926535897932384626
#define pb                      push_back
#define mk                      make_pair
#define mx                      1e18
#define EPS                     1e-10
#define dpoint(x)               fixed<<setprecision(x)
typedef long long int           ll;
typedef double                  dl;
typedef unsigned long long      ul;

//Funtions
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
int gcd(int a, int b){ int x ; return x = __gcd(a, b);}
int lcm(int a, int b){int y; return y = ((a)*((b)/gcd(a,b)));}

// Debugger
#define debugNS(a,b,c)             cout<<a<<b<<c;
#define debugN(b)               cout<<b<<endl;

int dx[] = {0, 0, -1, 1, -1, -1, 1, 1}; //Graph Move;
int dy[] = {1, -1, 0, 0, -1, 1, -1, 1};

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
    for(int i=0; i<s.size(); i++){
        ans = (2*ans)+s[i]-'0';
    }
    return ans;
}
 bool cmp(pair<int,char>a, pair<int,char>b){
    if(a.first!=b.first) return a>b;
    return a<b;
 }

ll findTrailingZeros(ll n)
{
    ll count = 0;
    for (ll i = 5; n / i >= 1; i *= 5)
        count += n / i;
    return count;
}
ll digit_counter(ll n){
    ll cnt=0;
    while(n){
        n/=10;
        cnt++;
    }
    return cnt;
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
       freopen("output.txt","w",stdout); 
  #endif

  FASTERIO; //cmt when use scanf & printf ;
   
 cout<<is_prime(32);

   

  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif

   return 0;
}