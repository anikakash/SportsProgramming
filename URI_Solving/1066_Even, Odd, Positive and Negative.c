#include<stdio.h>

int main()
{
    int n, i, count=0,count2=0, p=0, p1=0 ;

    for(i=1; i<=5; i++)
    {
        scanf("%d", &n);

        if(n%2==0)
        {
            count++;
        }
        else {
            count2++;
        }
        if(n>0)
        {
            p++;
        }
        else if(n<0)
        {
            p1++;
        }
    }
    printf("%d valor(es) par(es)\n", count);
    printf("%d valor(es) impar(es)\n", count2);
    printf("%d valor(es) positivo(s)\n", p);
    printf("%d valor(es) negativo(s)\n", p1);

    return 0;
}

