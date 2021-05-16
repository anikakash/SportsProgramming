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
        flush;
        for(int x=1; x<=t; x++)
        {
            string s; int cnt=0;
            getline(cin,s);
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]=='a' || s[i]=='d' || s[i]=='g' || s[i]=='j' || s[i]=='m' || s[i]=='p' || s[i]=='t' || s[i]=='w' || s[i]==' ') cnt++;
                else if(s[i]=='b' || s[i]=='e' ||  s[i]=='h' || s[i]=='k' || s[i]=='n' || s[i]=='q' || s[i]=='u' || s[i]=='x') cnt+=2;
                else if(s[i]=='c' || s[i]=='f' || s[i]=='i' || s[i]=='l' || s[i]=='o' || s[i]=='r' || s[i]=='v' || s[i]=='y')cnt+=3;
                else if(s[i]=='s' || s[i]=='z')cnt+=4;
            }
            cout<<"Case #"<<x<<": "<<cnt<<endl;
            
        }
        
    #ifdef EXTRA_8
        fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    #endif
    return 0;
}
