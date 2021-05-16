#include<stdio.h>

int main()
{
    int a, b, c, temp, x, y, j;

    scanf("%d %d %d",&a,&b,&c);
    x = a;
    y = b;
    j = c;
    if(a>b){temp = a; a = b; b = temp;}
    if(a>c){temp = a; a= c; c = temp;}
    if(b>c){temp = b; b = c; c = temp;}
    printf("%d\n%d\n%d\n",a,b,c);
    printf("\n%d\n%d\n%d\n",x,y,j);
    return 0;
}
