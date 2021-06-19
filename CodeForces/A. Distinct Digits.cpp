#include<bits/stdc++.h>
using namespace    std;

#define flush                   cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                      cout<<endl;
#define pi                      acos(-1.0) //3.1415926535897932384626
#define pb                      push_back
#define mx                      10000007
#define EPS                     1e-10
#define dpoint(x)               fixed<<setprecision(x)
#define debug1(a)               cout<<" "<<a<<" = ";
#define debug2(b)               cout<<b<<endl;
typedef long long int           ll;
typedef double                  dl;
typedef unsigned long long      ul;
// -----------------------Pre made Functions & Proto Type------------------------//
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
int gcd(int a, int b){ int x ; return x = __gcd(a, b);}
int lcm(int a, int b){int y; return y = ((a)*((b)/gcd(a,b)));}
//------------------------------GlobalVariable----------------------------------//
//---------------------------------Functions------------------------------------//
bool checker(int l){
   
   string s1 = to_string(l);
   sort(s1.begin(), s1.end());

   //cnt = std::distance(s1.begin(),std::unique(s1.begin(), s1.end()));

   for(int i=1; i<s1.size(); i++){
      if(s1[i]==s1[i-1])return 0;
      //cout<<s1[i]<<" ";
   }
   return 1;
}
//-------------------------------MAIN FUNCTION---------------------------------//
int main(){
   #ifdef anikakash
        clock_t tStart = clock();
        freopen("in.txt","r",stdin);
        freopen("ot.txt","w",stdout);
   #endif

        int l,r,x,tmp=0;
        scanf("%d %d",&l,&r);

         while(l<=r){
            int x = checker(l);
           // debug2(x);
            if(x){
               cout<<l<<endl;
               tmp=1;
               break;
            }
            else l++;
         }
         if(!tmp)cout<<-1<<endl;
   #ifdef anikakash
      fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
   #endif
   return 0;
}

