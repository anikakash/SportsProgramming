#include<stdio.h>

int main()
{
    int i;
    double sum=0, j=1.0;
    for(i=1; i<=39; i+=2){
        sum+=(i/j);
        j=j+j;
    }
    printf("%.2lf\n", sum);
    return 0;
}

