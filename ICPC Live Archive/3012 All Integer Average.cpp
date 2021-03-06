#include<bits/stdc++.h>
using namespace    std;

#define flush                   cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                      cout<<'\n';
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

int main(){
   
  #ifdef anikakash
       clock_t tStart = clock();
       freopen("INPUT.txt","r",stdin);
       freopen("output.txt","w",stdout); 
  #endif

  FASTERIO; //cmt when use scanf & printf ;

    int tt, caseno=1;
    while(cin>>tt && tt!=0){
        int sum=0, temp=tt;
        while(temp--){
            int x; cin>>x;
            sum+=x;
        }

        cout<<"Case "<<caseno++<<":"<<endl;

        bool Neg_Chek = false;
        if(sum<0){sum*=-1.0; Neg_Chek = true;}


        dl ave = sum/(tt*1.0) ;


        int ave_int = ave;
        dl dec_check = ave-ave_int;
        if(dec_check<EPS){
            if(Neg_Chek)cout<<"- ";
            cout<<ave<<endl;
        }
        else {
            int common = __gcd(sum,tt);
            int Numerator = 0, Denominator = 0;
            Numerator = sum/common;
            Denominator = tt/common;

            int a=0, b=0, c=0;

            if(Numerator > Denominator){
                a = Numerator/Denominator;
                b = Numerator%Denominator;
                c = Denominator;
            }
            else{
                b = Numerator;
                c = Denominator;
            }
            int x = digit_counter(a);
            int y = digit_counter(c);
            int ln = max(x,y);
            if(Neg_Chek)cout<<"  ";
            cout<<string(x,' ')<<setw(y)<<b<<endl;
            if(Neg_Chek)cout<<"- ";
            if(a)cout<<a;
            cout<<string(y,'-')<<endl;
            if(Neg_Chek)cout<<"  ";
            cout<<string(x,' ')<<setw(y)<<c<<endl;

        }

    }

  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif

   return 0;
}