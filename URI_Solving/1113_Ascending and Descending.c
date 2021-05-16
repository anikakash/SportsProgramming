#include<stdio.h>

int main()
{
    int x, y;
    while(scanf("%d %d", &x, &y)!=EOF)
    {
        if(x==y)
            return 0;
        else if(x>y)
            printf("Decrescente\n");
        else if(y>x)
            printf("Crescente\n");
    }
    return 0;
}
