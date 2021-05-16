#include<stdio.h>

int main()
{
    int  t, n1;
    int i, count=0;

    for(i=0; i<5; i++)
    {
        scanf("%d", &n1);
        if(n1%2 == 0){
            count++;
        }

    }
    printf("%d valores pares\n", count);
    return 0;
}

