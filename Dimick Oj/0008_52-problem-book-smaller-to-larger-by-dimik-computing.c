#include<stdio.h>

int main()
{
    int test, index, a, b,c, temp;
    scanf("%d",&test);

    for(index = 1; index <= test; index++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if(a>b){temp = a; a = b; b = temp;}
        if(a>c){temp = a; a = c; c = temp;}
        if(b>c){temp = b; b = c; c = temp;}
       printf("Case %d: %d %d %d\n", index, a, b, c);
    }
    return 0;
}
