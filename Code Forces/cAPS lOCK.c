#include<stdio.h>
#include<string.h>

int main()
{
    char str[101];
    int i , ln, count=0;
    scanf("%s", &str);

    ln = strlen(str);
    for(i=1; i<ln; i++){
        if(str[i]>=65 && str[i]<=90 ){
            count++;
        }
    }
    if(count == strlen(str)-1){
        for(i=0; i<ln; i++){
            if(str[i] >= 65 && str[i] <= 90){
                str[i] = 97+str[i]-65;
            }
            else if(str[i] >= 97 && str[i] <= 122){
                str[i] = 65+str[i]-97;
            }
        }
    }
    printf("%s\n", str);
    return 0;
}

