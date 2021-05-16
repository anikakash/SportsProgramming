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
        while(cin>>t)
        {
            vector<int> vec(t,0);
            for(int i=0; i<t; i++)cin>>vec[i];

            int total;
            cin>>total;

                int x=0, y=0, test=INT_MAX;
                sort(vec.begin(), vec.end());

            for(int i=0; i<t; i++)
            {
                for(int j=i+1; j<t; j++)
                {
                    if(vec[i]+vec[j] == total && test > abs(vec[i]-vec[j]))
                    {
                        x = vec[i];
                        y = vec[j];
                        test = abs(vec[i]-vec[j]);
                    }
                }
            }
            cout<<"Peter should buy books whose prices are "<<x<<" and "<<y<<"."<<endl;
            NL;
            vec.clear();
        }
    #ifdef EXTRA_8
        fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    #endif

    return 0;
}
