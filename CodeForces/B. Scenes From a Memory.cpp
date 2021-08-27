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
#define debugNS(a,b,c)             cout<<a<<b<<c;
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
ll digit_counter(ll n){
    ll cnt=0;
    while(n){
        n/=10;
        cnt++;
    }
    return cnt;
}

int main(){
   
  #ifdef anikakash
       clock_t tStart = clock();
       freopen("INPUT.txt","r",stdin);
       freopen("output.txt","w",stdout); 
  #endif

  FASTERIO; //cmt when use scanf & printf ;
  
  int tt; cin>>tt; 
  while(tt--){
    int sz; cin>>sz;
    string s; cin>>s;
    bool anik = false;
    for(int i=0; i<sz; i++){
        if(s[i]=='1' || s[i]=='4' || s[i]=='6' || s[i]=='8' || s[i]=='9'){
            cout<<1<<endl<<s[i]<<endl;
           anik = true; break;
        }
    }
    int cnt2=0, cnt3=0, cnt5=0, cnt7=0;
    bool flg = false;
    if(!anik){
    for(int i=0; i<sz; i++){
        if(s[i]=='2'){
            for(int j=i+1; j<sz; j++){
                if(s[j]=='2' || s[j]=='5' || s[j]=='7'){
                    cout<<2<<endl<<s[i]<<s[j]<<endl;
                   flg = true; break;
                }
            }
        }
        else if(s[i]=='3'){
            for(int j=i+1; j<sz; j++){
                if(s[j]=='3' || s[j]=='5' || s[j]=='2'){
                    cout<<2<<endl<<s[i]<<s[j]<<endl;
                    flg = true; break;
                }
            }
        }
        else if(s[i]=='5'){
            for(int j=i+1; j<sz; j++){
                if(s[j]=='2' || s[j]=='5' || s[j]=='7'){
                    cout<<2<<endl<<s[i]<<s[j]<<endl;
                    flg = true; break;
                }
            }
        }
        else if(s[i]=='7'){
            for(int j=i+1; j<sz; j++){
                if(s[j]=='2' || s[j]=='5' || s[j]=='7'){
                    cout<<2<<endl<<s[i]<<s[j]<<endl;
                   flg = true; break;
                }
            }
        }
        if(flg==true)break;
     }
  }

  }

  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif

   return 0;
}