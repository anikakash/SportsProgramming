#include<stdio.h>

int main()
{
    int t, n=0, z=0, i, j;
    char str[100001];
    scanf("%d", &t);//take string leath;

    scanf("%s", str);//take string
    for(i=0; i<t; i++)//cheak string by using string lenth;
    {
        if(str[i]==122)
        {
            z++;//if string char is z then ++;
        }
        else if(str[i]==110)
        {
            n++;//if string char is n then ++;
        }
    }
    for(; n--;)//now print;
    {
        printf("1 ");
    }
    for(; z--;)
    {
        printf("0 ");
    }

    return 0;
}
