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
        
   int arr[31][31];
      int t;
      cin>>t;
      for(int a=1; a<=t;a++)
      {
         memset(arr,0,sizeof(arr));
         int n,m,k;
         cin>>n>>m>>k;
            for(int i=0; i<n; i++)
            {
               for(int j=0; j<k; j++)
               {
                  cin>>arr[i][j];
               }
            }

            vector<int>vec;

            int pt;
            cin>>pt;
            while(pt--)
            {
               int query;
               cin>>query;
               vec.pb(query);
            }
            int cnt=0;
           for(int i=0; i<n; i++)
           {
               int wish=0;
               for(int j=0; j<k; j++)
               {
                     int tmp = arr[i][j];
                     int ok=0, ok2=0;
                     if(tmp<0)
                     {
                        for(int x=0; x<vec.size(); x++)
                        {
                           if(abs(tmp)==vec[x])ok=1;
                        }
                     }
                     else{
                        for(int x=0; x<vec.size(); x++)
                        {
                           if(tmp==vec[x])ok2=1;
                        }
                     }

                     if(tmp<0 && ok==0){wish=1;break;}
                     if(tmp>0 && ok2==1){wish=1;break;}
               }
               if(wish==1)cnt++;
           }
         if(cnt!=n)cout<<"Case "<<a<<": No"<<endl;
         else cout<<"Case "<<a<<": Yes"<<endl;

      }
   #ifdef anikakash
      fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
   #endif
    return 0;
}

