#include<stdio.h>

int main()
{
    long long int n, sum=0, i;
     while(scanf("%lld", &n) !=EOF){
        if(n<=0) break;
     else{
       while(n>9){
        while(n>0){
            i = n%10;
            n = n/10;
            sum = sum+i;
        }
        n =sum;
        sum =0;
     }
     printf("%lld\n", n);
     }
     }
    return 0;
}
