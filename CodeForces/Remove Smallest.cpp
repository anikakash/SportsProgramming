//thanks God For Every Thing!
//contest link:
#include<bits/stdc++.h>
#define pi                      acose(-1)

typedef long long int           ll;
typedef double                  dl;
using namespace std;
const int mx = 1e2+5;

int main()
{
    int t, n, cnt=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int ar[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&ar[i]);
        }
        sort(ar, ar+n);
        if(n>2)
        {
            for(int i=0; i<n-1; i++)
            {
                if((ar[i]+1==ar[i+1])||ar[i]==ar[i+1])
                {
                    cnt=0;
                }

                else
                {
                    printf("NO\n");
                    cnt++;
                    break;
                }
            }
        }
        else
        {
            if(n==1)
            {
                printf("YES\n");
            cnt++;
            }
            else if(ar[n-1]-ar[n-2] <=1){
                printf("YES\n");
                cnt++;
            }
            else{
                printf("NO\n");
                cnt++;
            }
        }

        if(cnt==0)
        {
            if(ar[n-1]-ar[n-2] <=1)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        cnt=0;
    }
    return 0;
}

