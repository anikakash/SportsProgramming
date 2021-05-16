#include<stdio.h>
#include<string.h>

int main()
{
    char str[105];
    int k, ln, i;
    //int unused __attribute__((unused));
    /*unused = */scanf("%d",&k);
    char n[k];
    n[k]='\0';
    /*unused = */scanf("%s", str);
    ln = strlen(str);

    if(ln <=k)
    {
        printf("%s\n", str);
    }
    else
    {
        for(i=0; i<k; i++)
        {
            n[i]=str[i];
        }
        printf("%s...\n", n);
    }

}
