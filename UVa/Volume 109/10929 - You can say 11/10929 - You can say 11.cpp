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
        
        string s;
        while(cin>>s)
        {
            if(s=="0")break;
            int sum1=0, sum2=0, ans=0;
            int ln = s.size();
            for(int i=1; i<ln; i+=2)
            {
                sum1+=s[i]-'0';
            }
            for(int i=0; i<ln; i+=2)
            {
                sum2+=s[i]-'0';
            }
            
            ans = sum1-sum2;
            if(ans<0)ans*=-1;
            if(ans%11==0)cout<<s<<" is a multiple of 11."<<endl;
            else cout<<s<<" is not a multiple of 11."<<endl;
            s.clear();
        }

    #ifdef EXTRA_8
        fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    #endif

    return 0;
}
