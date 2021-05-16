#include<stdio.h>

int main()
{
    int t, n,i, x=0,j;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        for(j=2; j<n; j++)
        {
            if(n%j==0)
            {
                printf("%d nao eh primo\n", n);
                x++;
                break;
            }
        }
        if(x==0)
        {
            printf("%d eh primo\n", n);
        }
        x=0;
    }
    return 0;
}
