#include<stdio.h>

int main()
{
    double  t, n1;
    int i, count=0;

    for(i=0; i<6; i++)
    {
        scanf("%lf", &n1);
        if(n1>0){
            count++;
        }

    }
    printf("%d valores positivos\n", count);
    return 0;
}
