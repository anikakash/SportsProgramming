#include<stdio.h>

int main()
{
    int temp=0, i;

    for(i=1000; i>=1; i--){
            printf("%d\t",i);
    temp++;
        if(temp%5==0){
            printf("\n");

        }
    }
    return 0;
}

