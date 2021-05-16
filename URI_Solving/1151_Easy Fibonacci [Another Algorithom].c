#include<stdio.h>

int main()
{
    int n, first=0, second=1, fibo, count=0;
    scanf("%d", &n);
    while(count<n-1)
    {
        if(count<=1)
        {
            fibo=count;
        }
        else
        {
            fibo = first+second;
            first = second;
            second = fibo;
        }

        printf("%d ", fibo);
        count++;
    }
 fibo = first+second;
printf("%d\n", fibo);

    return 0;
}
