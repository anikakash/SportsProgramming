#include<stdio.h>

int main()
{
    int t, x, y;
    float r=0;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &x, &y);
        r = x*1.0/y*1.0;
        if(y==0) printf("divisao impossivel\n");
        else printf("%0.1f\n",r);
    }


    return 0;
}

