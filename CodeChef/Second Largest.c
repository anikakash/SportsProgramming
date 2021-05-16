#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int i=0;
    int a, b, c;
    int mid;
    for(i = 0; i < num; i++)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        if(a<b && b<c || c<b && b<a)
            mid = b;
        else if(a<c && c<b || b<c && c<a)
            mid = c;
        else
            mid = a;

        printf("%d\n", mid);
    }
    return 0;
}
