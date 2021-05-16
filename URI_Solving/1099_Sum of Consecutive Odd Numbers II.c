#include<stdio.h>

int main()
{
    int n, x, y, i, sum=0;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d %d", &x, &y);
        if(x==y)
        {
            sum =0;
            printf("%d\n", sum);
        }
        else if(x>y)
        {
            for(i=y+1; i<x; i++)
            {
                if(i%2==1 || i%2==-1)
                {
                    sum+=i;
                }
            }
            printf("%d\n", sum);
            sum=0;
        }
        else
        {
            for(i=x+1; i<y; i++)
            {
                if(i%2==1 || i%2==-1)
                {
                    sum+=i;
                }
            }
            printf("%d\n", sum);
            sum=0;
        }
    }
    return 0;
}
