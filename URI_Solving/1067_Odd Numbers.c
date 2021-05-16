#include<stdio.h>

int main()
{
    int t, i;

    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        while(i%2 !=0)
        {
            printf("%d\n",i);
            break;
        }
    }

    return 0;
}
