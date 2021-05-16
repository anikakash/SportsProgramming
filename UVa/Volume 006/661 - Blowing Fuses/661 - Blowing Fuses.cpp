#include<bits/stdc++.h>
using namespace    std;

#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL           cout<<endl;
#define pi           acos(-1.0) //3.1415926535897932384626
#define dpoint(x)    fixed<<setprecision(x)
#define debug(x)     cout<<x<<endl;
#define gcd(a,b)     __gcd(a,b);
#define lcm(x,y)     (a * (b / gcd(a, b)));

typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}


int main()
{
    #ifdef EXTRA_8
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("out.txt","w",stdout);
    #endif
       int n,m,capacity, cnt=1;
       while(cin>>n>>m>>capacity)
       {
            if(n==0 && m==0 && capacity==0)return 0;
            int status [21]={0}, arr[21];
            for(int i=1; i<=n; i++)cin>>arr[i];
                int max=0, sum=0;
            for(int i=0; i<m; i++)
            {
                int x;
                cin>>x;
                if(!status[x])
                {
                    sum+=arr[x];
                    status[x]=1;
                }
                else 
                {
                    sum-=arr[x];
                    status[x]=0;
                }
                if(sum>max)max=sum;
            }
            cout<<"Sequence "<<cnt<<endl;cnt++;
            if(max>capacity)
                cout<<"Fuse was blown."<<endl;

            else
             cout<<"Fuse was not blown."<<endl<<"Maximal power consumption was "<< max<<" amperes."<<endl;
            NL;
       }
    #ifdef EXTRA_8
        fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    #endif
    return 0;
}
