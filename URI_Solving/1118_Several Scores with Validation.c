#include<stdio.h>

int main()
{
    float n, ave, sum=0, count=0;
    int x;
    while(1)
    {
first:
        scanf("%f", &n);
        if(n>0 && n<=10.0)
        {
            sum+=n;
            count++;
            if(count==2)
            {
                printf("media = %.2f\n", sum/2);
                sum=0;
                count=0;
an:
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &x);
                if(x==1)
                {
                    goto first;
                }
                else if(x==2)
                {
                    break;
                }
                else
                {
                    goto an;
                }
            }
        }
        else
        {
            printf("nota invalida\n");
        }
    }
    return 0;
}
