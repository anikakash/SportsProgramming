//thanks God For Every Thing!
//contest link:
#include<bits/stdc++.h>
#define pi                      acose(-1)
#define max                     10005
typedef long long int           ll;
typedef double                  dl;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test, num;
    cin>>test;
    while(test--)
    {
        cin>>num;
        int stor[max];
        int p=1, cnt=0, i=1;
        while(num!=0)
        {
            p=p*10;
            if(num%p !=0)
            {
                stor[i] = num%p;
                num = num-stor[i];
                i++;
            }
        }
        printf("%d\n",i-1);
        for(int x=1; x<i-1; x++)
        {
            printf("%d ", stor[x]);
        }
        printf("%d\n",stor[i-1]);
    }
    return 0;
}
