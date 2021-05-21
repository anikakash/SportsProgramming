#include<bits/stdc++.h>
using namespace    std;

#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL           printf("\n")
#define pi           acos(-1.0) //3.1415926535897932384626
#define mx           7500000
#define dpoint(x)    fixed<<setprecision(x)
#define mod          1000000007
#define pb           push_back
#define scn(x)       scanf("%d",&x)
#define scnd(x)      scanf("%lf",&x)
#define sc(x)        scanf("%s",&x)

typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

const int MAX = 1e6+5;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T gcd(T a, T b){if(a == 0) return b;return gcd ( b%a, a );}
template <class T> T lcm(T a, T b){return ( ( a/gcd ( a, b ) )*b );}
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
int nod(int n){int c=0;for(int i=1; i*i<=n; i++)if(n%i==0)c+=(1+(i*i!=n));return c;}
map<string, int>ma;
void init()
{
    ma["January"]=1;
    ma["February"]=2;
    ma["March"]=3;
    ma["April"]=4;
    ma["May"]=5;
    ma["June"]=6;
    ma["July"]=7;
    ma["August"]=8;
    ma["September"]=9;
    ma["October"]=10;
    ma["November"]=11;
    ma["December"]=12;
 
}

int main()
{
   init();
    int T,cas=0;
    int t1,t2,y1,y2;
    int m1,m2;
    string s1,s2;
    scanf("%d",&T);
    while(T--)
    {
        cas++;
        cin>>s1;scanf("%d,%d",&t1,&y1);
        
        cin>>s2;scanf("%d,%d",&t2,&y2);
        
        if(y1>y2)
		{
			swap(y1,y2);
			swap(t1,t2);
			swap(s1,s2);
		}
		
        m1=ma[s1];
        m2=ma[s2];
        
        if(m1>=3)
            y1++;
        if((m2<2) ||(m2==2 && t2<29))
            y2--;
		y1--;
        int tem1=y1/4-y1/100+y1/400;
        int tem2=y2/4-y2/100+y2/400;
        
        printf("Case %d: ",cas);
        printf("%d\n",tem2-tem1);
    }
    return 0;
}
/// ----------------------------Funaction Descriptions----------------------------------//


//author anikaksh;