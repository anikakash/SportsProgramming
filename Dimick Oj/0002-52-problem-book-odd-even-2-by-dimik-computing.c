#include<stdio.h>
#include<string.h>
int main()
{
    int i, t;
    char n[101];

    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%s",&n);


        if(n[strlen(n)-1]%2==0){
            printf("even\n");
        }
        else{
            printf("odd\n");
        }
    }

    return 0;
}
