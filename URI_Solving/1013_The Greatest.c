#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if(c<a&&a>b){
        printf("%d eh o maior\n",a);
    }
    else if(c<b&&b>a){
        printf("%d eh o maior\n",b);
    }
    else{
        printf("%d eh o maior\n",c);
    }

    return 0;
}

