#include<stdio.h>

int main()
{
    int x, y, i, sum=0, j;

    while(scanf("%d %d", &x, &y)!=EOF)
    {
        if(x<=0 || y<=0)
            return 0;
        else if(x>y)
        {
            for(i=y; i<=x; i++)
            {
                sum+=i;
                printf("%d ", i);
            }
            printf("Sum=%d\n", sum);
            sum=0;
        }
        else
        {
            for(i=x; i<=y; i++)
            {
                sum+=i;
                printf("%d ", i);
            }
            printf("Sum=%d\n", sum);
            sum=0;
        }
    }
    return 0;
}

