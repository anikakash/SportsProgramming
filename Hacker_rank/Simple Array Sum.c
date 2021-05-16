#include<stdio.h>

int main()
{
    int i,t,n,sum=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        sum=sum+n;
    }
    printf("%d\n",sum);

    return 0;
}
