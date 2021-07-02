#include<bits/stdc++.h>
using namespace    std;

#define flush                   cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                      cout<<endl;
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



int main(){
  #ifdef anikakash
       clock_t tStart = clock();
       freopen("in.txt","r",stdin);
       freopen("output.txt","w",stdout);
  #endif

     int n;
     cin>>n;
     string s;
     cin>>s;
     int cnt=0, cntx=0;
     for(int i=0; i<n-1; i++){
         if(s[i]=='a'|| s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='e' || s[i]=='y'){
            if(s[i+1]!='a'&& s[i+1]!='i' && s[i+1]!='o' && s[i+1]!='u' && s[i+1]!='e' && s[i+1]!='y'){
               cnt++;
              // cout<<i<<" = "<<s[i]<<" "<<s[i+1]<<" = "<<cnt<<endl;
               i++;
            }
         }
         else if(s[i]!='a' && s[i]!='i'  && s[i]!='o'  && s[i]!='u'  && s[i]!='e'  && s[i]!='y'){
            if(s[i+1]=='a' || s[i+1]=='i' || s[i+1]=='o' || s[i+1]=='u' || s[i+1]=='e' || s[i+1]=='y'){
               cnt++; 
              // cout<<i<<" = "<<s[i]<<" "<<s[i+1]<<" = "<<cnt<<endl;
               i++;
            }
         }
     }
     cout<<cnt<<endl;
     
  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif
   return 0;
}