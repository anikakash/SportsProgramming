#include<stdio.h>

int main()
{
    int a[1000],n, i,j, x[1000];
    scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
    for(i=0,j=n-1; i<n; i++,j--){
        x[j]=a[i];
    }
    for(i=0;i<n;i++){
        printf("%d ",x[i]);
    }
    return 0;
}
