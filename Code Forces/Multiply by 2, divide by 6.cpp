#include<bits/stdc++.h>
 
#define pi                  acose(-1)
#define rep(i,x)            for(int i=0; i<(x); i++)
#define rep1(i,x)            for(int i=0; i<=(x); i++)
 
typedef long long int       ll;
typedef double              dl;
using namespace std;
 
int main()
{
        int t;
        cin>>t;
        while(t--)
        {
            ll n;
            int cnt=0;
            cin>>n;
            while(n>1)
            {
                if(n%6==0)
                    n/=6;
                else
                    n*=2;
                cnt++;
            }
            if(n==1)
                printf("%d\n", cnt);
            else
                printf("-1\n");
        }
        return 0;
    