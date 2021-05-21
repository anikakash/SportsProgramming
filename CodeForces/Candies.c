#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
   while(t--)
   {
    int n, k, y;
    scanf("%d",&n);
    for(k=2; k<30; k++)
    {
         y = pow(2,k)-1;

        /*result = x << n;
        y = n/result;*/

    if(n%y == 0)
    {
        printf("%lld\n",n/y);
        break;

    }
    }
    }
    return 0;
}
