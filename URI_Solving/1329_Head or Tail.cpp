//thanks God For Every Thing!
//contest link:
#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
#define pi                      acose(-1)
#define rep(i,x)                for(int i=0; i<(x); i++)
#define rep1(i,x)               for(int i=1; i<=(x); i++)

typedef long long int           ll;
typedef double                  dl;
using namespace std;


int main()
{

    int n, sum_ze=0, sum_on=0;

    while(cin>>n)
    {
        int x[n];
        if(n==0)
            return  0;
        else
        {
            rep(i,n)
            {
                cin>>x[i];
            }

            rep(i,n)
            {
                if(x[i]==1)
                {
                    sum_on++;
                }
                else if(x[i]==0)
                {
                    sum_ze++;
                }
            }
            printf("Mary won %d times and John won %d times\n", sum_ze, sum_on);
            sum_on=0;
            sum_ze=0;
        }

    }

    return 0;
}
