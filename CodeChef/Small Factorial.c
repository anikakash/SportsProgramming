#include<stdio.h>

int main()
{
    int i, t, n,j,x;
    scanf("%d", &t);
    for(i=1; i<=t;i++){

    	scanf("%d", &n);
    	x=1;
    	for(j=1; j<=n; j++){
    		x = x*j;
    }
    printf("%d\n",x);
    }
    return 0;
}
