#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define mx                       1e2
#define EPS                      1e-10
#define dpoint(x)                fixed<<setprecision(x)
typedef long long int            ll;
typedef double                   dl;
typedef unsigned long long int   ull;

//Funtions
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
int gcd(int a, int b){ int x ; return x = __gcd(a, b);}
int lcm(int a, int b){int y; return y = ((a)*((b)/gcd(a,b)));}

// Debugger
#define gobug                   0
#define debugNS(a,b,c)          cout<<a<<b<<c<<endl;
#define debugN(b)               cout<<b<<endl;

int ROW[]={+0, +0, -1, +1};
int COL[]={+1, -1, +0, +0};
 
int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
 
int KX[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
int KY[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move

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
  
    
    int tt; cin>>tt;
    for(int caseno=1; caseno<=tt; caseno++){
        int n; cin>>n;
        string s; cin>>s;
        int cnt=0, ans=INT_MAX;
        for(int i=0; i<n; i++){
            if(s[i]=='.'){
                cnt++;
                i+=2;
            }
        }
        cout<<"Case "<<caseno<<": "<<cnt<<endl;
    }

  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif

   return 0;
}