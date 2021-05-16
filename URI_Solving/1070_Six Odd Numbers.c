#include<stdio.h>

int main()
{
    int n, i, l;
    scanf("%d",&n);
    for(i=n; i<n+12; i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
    return 0;
}
