#include<stdio.h>

int main()
{
    double  t, n1, ave, sum=0;
    int i, count=0;

    for(i=0; i<6; i++)
    {
        scanf("%lf", &n1);
        if(n1>0){
           sum = sum+n1;
            count++;
        }

    }
    ave = sum/count;
    printf("%d valores positivos\n%.1lf\n", count, ave);
    return 0;
}
