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
#define gcd(a,b)     __gcd(a,b);
#define lcm(x,y)     (a * (b / gcd(a, b)));

typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}

int main()
{
     #ifndef ONLINE_JUDGE
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("ans.txt","w",stdout);
     #endif
    int x;
    cin>>x;

    flush;
    
    for(int i=1; i<=x; i++)
    {
        string s;
        getline(cin,s);
        if(s[4]!='s')
        {
            cout<<"Case "<<i<<": ";
            for(int j=0; j<s.size()+1; j++)
            {
                if(j<4)cout<<s[j];
                else if(j==4)cout<<'s';
                else cout<<s[j-1];
            }
            cout<<endl;
        }
        else cout<<"Case "<<i<<": "<<s<<endl;
    }
    
     #ifndef ONLINE_JUDGE
        fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
     #endif
    return 0;
}
