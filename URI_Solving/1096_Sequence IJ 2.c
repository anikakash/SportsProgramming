#include<stdio.h>

int main()
{
    int i, j;
    for(i=1; i<=9; i+=2)
    {
        for(j=7; j>4;)
        {
            printf("I=%d J=%d\n", i, j);
            j--;
        }
    }
    return 0;
}
