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


int main(){
   
  #ifdef anikakash
       clock_t tStart = clock();
       freopen("INPUT.txt","r",stdin);
       freopen("output.txt","w",stdout); 
  #endif

  FASTERIO; //cmt when use scanf & printf ;

    int a, b; 
    cin>>a;
    vector<int>v(a);
    for(int i=0; i<a; i++)cin>>v[i];
        // sort(v.begin(), v.end());
        int l=v[0], r=v[0];
        
        for(int i=0; i<a; i++){
            l = min(l,v[i]);
            r = max(r,v[i]);
        }

        int SM=INT_MAX;
        for(int i=l; i<=r; i++){
            int tmp=0;
            for(int j=0; j<a; j++){
                tmp+= (v[j]-i)*(v[j]-i);
            }
            //debugNS(i," = ",tmp);NL;
            if(tmp<SM)SM = tmp;
        }
        cout<<SM<<endl;
    
  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif

   return 0;
}