#include<stdio.h>

int main()
{
    int a,b,c,d, ak, nk, reminder;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    ak=c+d;
    nk=a+b;
    reminder=a%2;
    if(b>c && d>a && ak>nk && c>0 && d>0 && reminder==0){
        printf("Valores aceitos\n");
    }
    else{
        printf("Valores nao aceitos\n");
    }
    return 0;
}

