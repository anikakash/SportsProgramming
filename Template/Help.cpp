//             _   _                
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
#define mx                      1000006

typedef long long int           ll;
typedef double                  dl;
typedef unsigned long long      ul;


int BinarySrc(int low, int high, int key);
 
vector<int>arr;
int main()
{
   #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("out.txt","w",stdout);
   #endif
   
  int t, cnt=1; cin >> t;
  for(int i=0; i<t; i++)
  {
      int x;
      cin>>x;
      arr.push_back(x);
  }
  sort(arr.begin(),arr.end());
  int n;
  cin>>n;
  for(int i=0; i<n; i++)
  {
      int x, ans=0;
      cin>>x;
      int low, high;
      low = 0;
      //cout<<low<<endl;
      high = t-1;
       //cout<<x<<endl;
      ans = BinarySrc(low, high, x);
      cout<<ans+1<<endl;
  }
    
    return 0;
}
/// ----------------------------Funaction Descriptions----------------------------------//
 
int BinarySrc(int low, int high, int key)
{
    int index;
    while(low<=high)
    {
       int mid = low + (high-low)/2;; //if work with indx;
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
    return index; //key not find;
}