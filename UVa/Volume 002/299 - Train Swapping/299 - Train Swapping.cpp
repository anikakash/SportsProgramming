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

void file()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("out.txt","w",stdout);
    #endif
}

vector<int> arr;
int Bobule_Sort()
{
    int size = arr.size(), cnt=0;
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                cnt++;
            }
        }
    }
    return cnt;
}
int main()
{
     // #ifndef ONLINE_JUDGE
     //    clock_t tStart = clock();
     //    freopen("input.txt","r",stdin);
     //    freopen("out.txt","w",stdout);
     // #endif
        int n;
        while(cin>>n)
        {
            while(n--)
            {
                int num;
                cin>>num;
                while(num--)
                {
                    int x;
                    cin>>x;
                    arr.push_back(x);
                }
                cout<<"Optimal train swapping takes "<<Bobule_Sort()<<" swaps."<<endl;
                arr.clear();
            }
        }
}
