#include<stdio.h>

int main()
{
    int n,count=0;
    float ave,sum=0, ans;
    while( scanf("%d", &n)!=EOF)
    {
     if(n>0){
        sum+=n;
        count++;
     }
     else{
        break;
     }

    }
    ans = sum/count;
    printf("%.2f\n", ans);
    return 0;
}
