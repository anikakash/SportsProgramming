#include<stdio.h>

int main()
{
    int n, i,x,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        sum+=x;
    }
    if(sum==0){
            printf("EASY\n");
        }
        else{
            printf("HARD\n");
        }

    return 0;
}
