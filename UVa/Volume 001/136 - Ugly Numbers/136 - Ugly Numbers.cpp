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
        freopen("out.txt","w",stdout);
    #endif
        int arr[1505]={0}, x,y,z,a,b,c;
         a=b=c=1;
        arr[1]=1;
        for(int i=2; i<=1500; i++)
        {
            //cout<<"Case : "<<i<<endl;
            x = arr[a]*2;
           // cout<<"X = "<<x<<endl;
            y = arr[b]*3;
           // cout<<"Y = "<<y<<endl;
            z = arr[c]*5;
            //cout<<"Z = "<<z<<endl;
            arr[i]=min(x,min(y,z));
            //cout<<"arr ["<<i<<"] = "<<arr[i]<<endl;
            if(arr[i]==x)a++;
            if(arr[i]==y)b++;
            if(arr[i]==z)c++;
           //cout<<"A = "<<a<<" B  = "<<b<<" C = "<<c<<endl;
        }
        cout<<"The 1500'th ugly number is "<<arr[1500]<<"."<<endl;
        ///ans is 859963392
    return 0;
}