#include<bits/stdc++.h>
using namespace    std;

#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL           cout<<endl;
#define pi           acos(-1.0) //3.1415926535897932384626
#define mx           100005
#define dpoint(x)    fixed<<setprecision(x)
#define mod          1000000007
#define pb           push_back
#define scn(x)       scanf("%d",&x)
#define scnd(x)      scanf("%lf",&x)
#define sc(x)        scanf("%s",&x)
#define pb           push_back
#define switch       0
#define switch1      0
#define Debug1(x)    cout<<"Value : "<<x<<endl;
#define Debug2       cout<<"List Print Check; ";

typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T gcd(T a, T b){if(a == 0) return b;return gcd ( b%a, a );}
template <class T> T lcm(T a, T b){return ( ( a/gcd ( a, b ) )*b );}
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}

int main()
{
  //  #ifndef Brain_FUCK
  //       freopen("input.txt","r",stdin);
  //       freopen("out.txt","w",stdout);
  //  #endif
  int t, n, arr[15], tmp=0, k;
  cin>>t;
  while(t--)
  {
    
    cin>>n;
      for(int i=0; i<11; i++)
      {
        arr[i]=0;
      }
      for(int i=1; i<=n; i++)
      {
        tmp=i;
          while(tmp!=0)
          {
            k = tmp%10;
            arr[k]++;
            tmp/=10;
          }
      }
     for(int i=0; i<10; i++)
      {
        cout<<arr[i];
        if(i<9)cout<<" ";
      }
      cout<<endl;
   }
    return 0;
}
