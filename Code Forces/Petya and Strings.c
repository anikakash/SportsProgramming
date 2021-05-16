#include<stdio.h>
#include<string.h>

int main()
{
    char str1[101], str2[101], x;
    int lenth1, lenth2, i, j;

    scanf("%s %s", &str1, &str2);

    lenth1 = strlen(str1);
    lenth1 = strlen(str2);

    for(i=0; i<lenth1; i++)
    {
         if(str1[i]>=65&&str1[i]<=90)
        {
            str1[i]='a'+str1[i]-'A';
        }
    }

    for(j=0; j<lenth2; j++)
    {
        if(str2[i]>=65 && str2[i]<=90)
        {
            str1[i] = 'a'+str1[i]-'A';
        }
    }

     x=strcasecmp(str1,str2);
    if(x>0) printf("1\n");
    else if(x<0) printf("-1\n");
    else printf("0\n");

    return 0;
}
