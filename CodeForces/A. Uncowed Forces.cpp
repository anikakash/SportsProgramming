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
    
   int m1,m2,m3,m4,m5,w1,w2,w3,w4,w5, hs, hu;
   cin>>m1>>m2>>m3>>m4>>m5;
   cin>>w1>>w2>>w3>>w4>>w5;
   cin>>hs>>hu;
   dl s1 = ((1-(m1/250.0))*500)-(50*w1);
   dl s2 = ((1-(m2/250.0))*1000)-(50*w2);
   dl s3 = ((1-(m3/250.0))*1500)-(50*w3);
   dl s4 = ((1-(m4/250.0))*2000)-(50*w4);
   dl s5 = ((1-(m5/250.0))*2500)-(50*w5);
   hs*=100;
   hu*=50;
   s1 = max(150.0,s1);
   s2 = max(300.0,s2);
   s3 = max(450.0,s3);
   s4 = max(600.0,s4);
   s5 = max(750.0,s5);
   int ans = (s1+s2+s3+s4+s5+hs)-hu;
   cout<<ans<<endl;
   // debugNS("s1",s1);
   // debugNS("s2",s2);
   // debugNS("s3",s3);
   // debugNS("s4",s4);
   // debugNS("s5",s5);
   // debugNS("sum",(s1+s2+s3+s4+s5+hs));

  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif
   return 0;
}