#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);

    printf("%d\n",n/2);

    if (n%2==0)
    {
        for(i=1;i<n/2;i++)
        {
            printf("2 ");
        }
        printf("2\n");
    }
    if(n%2==1)
    {
        for (i=1;i<n/2;i++)
        {
            printf("2 ");
        }
        printf("3\n");
    }
    return 0;
}
