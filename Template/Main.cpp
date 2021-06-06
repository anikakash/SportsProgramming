//              _   _                
//   __ _ _   _| |_| |__   ___  _ __ 
//  / _` | | | | __| '_ \ / _ \| '__|
// | (_| | |_| | |_| | | | (_) | |   
//  \__,_|\__,_|\__|_| |_|\___/|_|   
//              _ _            _             _     
//   __ _ _ __ (_) | __   __ _| | ____ _ ___| |__  
//  / _` | '_ \| | |/ /  / _` | |/ / _` / __| '_ \ 
// | (_| | | | | |   <  | (_| |   < (_| \__ \ | | |
//  \__,_|_| |_|_|_|\_\  \__,_|_|\_\__,_|___/_| |_|

#include<bits/stdc++.h>
using namespace    std;

#define flush                   cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                      cout<<endl;
#define pi                      acos(-1.0) //3.1415926535897932384626
#define dpoint(x)               fixed<<setprecision(x)
#define debug(x)                cout<<x<<endl;
// #define gcd(a, b)            __gcd(a, b)
// #define lcm(a, b)            ((a)*((b)/gcd(a,b)))
#define pb                      push_back
#define mx                      10000007

typedef long long int           ll;
typedef double                  dl;
typedef unsigned long long      ul;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
int gcd(int a, int b){ int x ; return x = __gcd(a, b);}
int lcm(int a, int b){int y; return y = ((a)*((b)/gcd(a,b)));}

void firstthree(ll n, ll m)
{
  dl x = m*log10(n);
  x = x - (ll)x;
  dl ans = pow(10,x);
  int res = ans*100;

  cout<<res<<"...";

}
vector<ll>arr;
int BinarySrc(ll low, ll high, ll key)
{
    ll index;
    while(low<=high)
    {
       ll mid = low + (high-low)/2; //if work with indx;
       //int 
        if(arr[mid]<key)
        {
            low = mid+1;
        }
        else if(arr[mid]>key)
        {
            high = mid-1;
        }
        else
        {
             index = mid;
             high = mid-1;
            
        } 
    }
    //index = -1; 
    if(arr[index]==key)return index;
    else return -1;
}


int main()
{
   #ifdef anikakash
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("out.txt","w",stdout);
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

         int pt, query;
         cin>>pt;
         while(pt--)
         {
            cin>>query;
            vec.pb(query);
         }

         bool ok = true;
         for(int i=0; i<n; i++)
         {
            for(int j=0; j<k; j++)
            {
               if(arr[i][j]<0)
               {
                  for(int x=0; x<vec.size();x++)
                  {
                     if(arr[i][j] == vec[x]*-1)ok = false;
                     else {ok = true;break;}
                  }  
               }
               else
               {
                  for(int x=0; x<vec.size();x++)
                  {
                     if(arr[i][j] != vec[x])ok = false;
                     else {ok = true;break;}
                  }  
               }
            }
            if(!ok)break;
         }
         if(!ok)cout<<"Case "<<a<<": No"<<endl;
         else cout<<"Case "<<a<<": Yes"<<endl;

      }

   
       
   #ifdef anikakash
      fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
   #endif
    return 0;
}


//  _____            _   _            _                      ___   __ 
// |  ___|__  _ __  | |_| |__   ___  | |    _____   _____   / _ \ / _|
// | |_ / _ \| '__| | __| '_ \ / _ \ | |   / _ \ \ / / _ \ | | | | |_ 
// |  _| (_) | |    | |_| | | |  __/ | |__| (_) \ V /  __/ | |_| |  _|
// |_|  \___/|_|     \__|_| |_|\___| |_____\___/ \_/ \___|  \___/|_|                                                                    
//   ____ ____  
//  / ___|  _ \ 
// | |   | |_) |
// | |___|  __/ 
//  \____|_|    
//            