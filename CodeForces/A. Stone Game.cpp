#include<bits/stdc++.h>
using namespace    std;

#define flush                   cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                      cout<<endl;
#define pi                      acos(-1.0) //3.1415926535897932384626
#define dpoint(x)               fixed<<setprecision(x)
#define debug(x)                cout<<x<<endl;
#define pb                      push_back
#define mx                      10000007
#define EPS                     1e-9
typedef long long int           ll;
typedef double                  dl;
typedef unsigned long long      ul;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
int gcd(int a, int b){ int x ; return x = __gcd(a, b);}
int lcm(int a, int b){int y; return y = ((a)*((b)/gcd(a,b)));}


int main()
{
   #ifdef anikakash
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("ot.txt","w",stdout);
   #endif
        
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      int sm, big, smi=INT_MAX, bii=0;
      vector<int>vec;
      for(int i=0; i<n; i++)
      {
         int x;
         cin>>x;
         vec.pb(x);
         if(x<smi)
        {
            smi=x;
            sm=i+1;
        }
         if(x>bii)
        {
            bii=x;
            big=i+1;
        }
      }
      
      int Rsm, Rbig, Rsmi=INT_MAX, Rbii=0, cnt=0;
      for(int i=n-1; i>=0; i--)
      {
         if(vec[i]<Rsmi){Rsmi=vec[i];Rsm=cnt;}
         if(vec[i]>Rbii){Rbii=vec[i];Rbig=cnt;}
         cnt++;
      }
      Rsm++;Rbig++;
     //cout<<sm<<" "<<big<<" "<<Rsm<<" "<<Rbig<<endl;
        int x = max(sm,big);
        int y = max(Rsm,Rbig);

        int a = min(x,y);

        int x1 = min(sm,big);
        int y2 = min(Rsm,Rbig);

        int b = x1+y2;

        cout<<min(a,b)<<endl;

     vec.clear();
    }
      
   #ifdef anikakash
      fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
   #endif
    return 0;
}