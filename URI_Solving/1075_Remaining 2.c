#include<stdio.h>

int main()
{
    int i, n, sum;
    scanf("%d", &n);
    for(i=0; i<10000; i++)
    {
        if(i%n==0)
        {
            sum =i+2;
            printf("%d\n", sum);
        }

    }

}
