#include<stdio.h>
#include<string.h>

int main()
{
    char ch[6];
    int i = 0;
    while(scanf("%s", ch) !=EOF){

    if(strcmp(ch,"*")==0) return 0;
    i++;
    if(strcmp(ch,"Hajj")==0){
        printf("Case %d: Hajj-e-Akbar\n", i);
    }
    else if(strcmp(ch,"Umrah")==0){
        printf("Case %d: Hajj-e-Asghar\n", i);
    }
    }
    return 0;
}
