//not solve
#include<stdio.h>

int main()
{
    int t, n,l,x, y ,k, count=0;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        for(int i=1; i<=10000; i++)
        {
            k = n%10;
            x = n-k;
            if(n%10 != 0){
               count ++;
            }
             n = x/10;
        }
        printf("%d\n%d %d", count, k, x);
         count = 0;
    }
    return 0;
}
