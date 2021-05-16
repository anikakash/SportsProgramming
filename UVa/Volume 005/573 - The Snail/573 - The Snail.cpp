#include<bits/stdc++.h>
using namespace    std;

#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL           printf("\n")
#define pi           acos(-1.0) //3.1415926535897932384626
#define mx           7500000
#define dpoint(x)    fixed<<setprecision(x)
#define mod          1000000007
#define pb           push_back
#define scn(x)       scanf("%d",&x)
#define scnd(x)      scanf("%lf",&x)
#define sc(x)        scanf("%s",&x)
#define debug(x)     cout<<x<<endl;

typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T gcd(T a, T b){if(a == 0) return b;return gcd ( b%a, a );}
template <class T> T lcm(T a, T b){return ( ( a/gcd ( a, b ) )*b );}
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}


int main()
{
   #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("out.txt","w",stdout);
   #endif
  
    int h,u,d,f;
    while (cin>>h>>u>>d>>f)
    {
        if(h==0) return 0;
        dl factor = ((double)f/100)*u;
        dl day_climb=0, final_climb=0, climb=u*1.0;
        int cnt=0;
        if(h<u) 
        {
            cout<<"success on day "<<1<<endl;
        }
        else
        {
                final_climb = u-d;
                cnt++;
               // cout<<"Day "<<cnt<<" final_climb = "<<final_climb<<endl;
            while(final_climb <= h)
            {
                if(final_climb < 0) break;
                climb-=factor;
                if(climb<0)
                {
                    final_climb = final_climb - d;
                    cnt++;
                }
                else
                {
                    final_climb+=climb;
                    if(final_climb > h)
                    { 
                        cnt++;
                        break;
                    }
                    final_climb = final_climb - d;
                    cnt++;
                }
                
          //  cout<<"Day "<<cnt<<" Can Climb = "<<climb<<" final_climb = "<<final_climb<<endl;
            } 
                if(final_climb < 0)cout<<"failure on day "<<cnt<<endl;
                else cout<<"success on day "<<cnt<<endl;
        }
    }
    return 0;
}
/// ----------------------------Funaction Descriptions----------------------------------//

