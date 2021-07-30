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


ll powfun(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll answer = a;
    ll increment = a;
    int i, j;
    for(i = 1; i < b; i++)
    {
        for(j = 1; j < a; j++)
        {
            answer += increment;
        }
        increment = answer;
    }
    return answer;
}
int main(){
   
  #ifdef anikakash
       clock_t tStart = clock();
       freopen("INPUT.txt","r",stdin);
       freopen("OUTPUT.txt","w",stdout);
  #endif

    FASTERIO;
    
   ll n,fsum=0,bx; cin>>n>>bx;
   if(bx==10){
        for(int i=0; i<n; i++){
        int tp;cin>>tp;
            fsum = (fsum*10)+tp;
       }
   }
   else{
        vector<ll>a1(n);
       for(int i=0; i<n; i++)cin>>a1[i];
        // for(auto i:a1)cout<<i<<" ";
        //     NL;
            for(int i=0; i<n; i++){
                fsum+=a1[i]*(powfun(bx,n-(i+1)));
        }
   }
    
    ll m, by, ssum=0; cin>>m>>by;
    if(by==10){
        for(int i=0; i<m; i++){
        int tp;cin>>tp;
            ssum = (ssum*10)+tp;
       }
    }
    else{
        vector<ll>a2(m);
        for(int i=0; i<m; i++)cin>>a2[i];
            //  for(auto i:a2)cout<<i<<" ";
            // NL;
            for(int i=0; i<m; i++){
                ssum+=a2[i]*(powfun(by,m-(i+1)));
            }
    }

        if(fsum==ssum)cout<<"="<<endl;
        else if(fsum>ssum)cout<<">"<<endl;
        else cout<<"<"<<endl;
        //cout<<fsum<<" "<<ssum<<endl;
  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif
   return 0;
}