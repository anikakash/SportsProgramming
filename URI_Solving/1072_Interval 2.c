#include<stdio.h>

int main()
{
    int n, i, x, count =0, diff=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &x);
        if(10<=x && x<=20)
        {
            count++;
        }
        else
        {
            diff++;
        }
    }
    printf("%d in\n%d out\n", count, diff);
    return 0;
}
