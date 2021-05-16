#include<stdio.h>
#include<string.h>
int main()
{
    int count = 0,i,l;
    char s[1000];
    while(gets(s)){
        if(s==EOF)
            break;
        else{
        l=strlen(s);
        for(i=0;i<l;i++){
            if(s[i]=='"'){
                count++;
                if(count%2!=0)
                    printf("``");
                else
                    printf("''");
            }
            else
                printf("%c",s[i]);
        }
        printf("\n");
        }
    }
    return 0;
}
