#include<stdio.h>
int main()
{
    float n, sum =0, count=0;
    float ans;
    while(scanf("%f", &n)!=EOF)
    {
        if(n<0)
        {
            printf("nota invalida\n");
        }
        else
        {
            if(10<n)
            {
                printf("nota invalida\n");
            }
            else
            {
                sum+=n;
                count++;
                if(count==2)
                {
                    ans = (sum*1.0)/(count*1.0);
                    printf("media = %.2f\n", ans);
                    break;
                }
            }
        }
    }
    return 0;
}
