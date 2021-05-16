#include<stdio.h>

int main()
{
    int t, i, j, fy,a,b,c,result;

    while(scanf("%d",&t)!=EOF){
        for(i=0; i<t; i++){
            int  sum=0;
            scanf("%d",&fy);
            for(j=0; j<fy; j++){
                scanf("%d %d %d", &a, &b, &c);
                    result = a*c;
                    sum = sum+result;
            }
            printf("%d\n", sum);
        }
    }
    return 0;
}
