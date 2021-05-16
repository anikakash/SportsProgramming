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
int isprime(int n)
{
    if(n==2)
        return 1;
    if(n%2==0 || n==1)
        return 0;
   
    for(int i=3; i*i<=n;i+=2) if(n%i==0)return 0;
    
    return 1;
}

int main()
{
    #ifdef EXTRA_8
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("out.txt","w",stdout);
    #endif
       int t;
       scanf("%d",&t);
       getchar();
       for(int x=1; x<=t; x++)
       {
            char str[2005];
            int data[150]={0};
            vector<int>value;
            int n;
            gets(str);
            //memset(data,0,sizeof(data));
            for(int i=0; i<strlen(str); i++)
            {
                n = str[i];
                if(data[n]==0)
                    value.push_back(n);
                data[n]++;
            }

            sort(value.begin(), value.end());

            bool flg = false;
            printf("Case %d: ",x);
            for(int i=0; i<value.size(); i++)
            {
                if(isprime(data[value[i]]))
                {
                    printf("%c",value[i]);
                    flg=true;
                }
            }

            if(!flg) printf("empty");
            value.clear();
            printf("\n");
            
       }
    #ifdef EXTRA_8
        fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    #endif
    return 0;
}
