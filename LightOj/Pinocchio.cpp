#include<bits/stdc++.h>
using namespace    std;

#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL           cout<<endl;
#define pi           acos(-1.0) //3.1415926535897932384626
#define dpoint(x)    fixed<<setprecision(x)
#define mod          1000000007
#define pb           push_back
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
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("ans.txt","w",stdout);
     #endif
   int test;
     cin>>test;
     for(int i=1; i<=test; i++)
     {
        int t;
        cin>>t;
        vector<int> arr;
        for(int i=0; i<t; i++) 
        {
            int x;
            cin>>x;
            arr.push_back(x);
        }

         
            int cnt=0, last=2, diff=0, lies=0;

          for(int i=0; i<t; i++)
          {
               diff = arr[i]-last;
               if(diff){
                    lies = ceil((double)diff/5.0);
                    if(lies==0)cnt++;
                    else cnt+=lies;
                    last = arr[i];
               }
          }
        
        cout<<"Case "<<i<<": "<<cnt<<endl;
     }
   #ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}
