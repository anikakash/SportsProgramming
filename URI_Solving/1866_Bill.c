#include<stdio.h>

int main()
{
    int t, n;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        if(n % 2 == 0)
        {
            printf("0\n");
        }
        else{
            printf("1\n");
        }
    }
    return 0;
}
