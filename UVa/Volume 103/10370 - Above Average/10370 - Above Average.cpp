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
       int t;
       cin>>t;
       while(t--)
       {
            int n, sum=0, cnt=0;
            cin>>n;
            vector<int>arr;
            for(int i=0; i<n; i++)
            {
                int x;
                cin>>x;
                arr.push_back(x);
                sum+=x;
            }
            dl ave = (sum*1.00)/(n*1.00);
            for(int i=0; i<n; i++)
            {
                if(arr[i]>ave)cnt++;
            }
            dl ans = ((double)cnt/(double)n)*100;
            cout<<dpoint(3)<<ans<<"%"<<endl;
       }
    #ifdef EXTRA_8
        fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    #endif
    return 0;
}
