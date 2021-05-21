#include<stdio.h>
#include<string.h>

int main()
{
    int i, t, j;
    long int length;
    char string[101], num[101];

    scanf("%d", &t);

    for(i=0; i<t; i++)
    {
        scanf("%s", &string);

        length = strlen(string);
        if(length > 10)
        {
            for(j=0; j<length; j++)
        {
            num[0] = string[0];
            num[j] = string[j];
        }
            printf("%c%ld%c\n", num[0], length-2, string[strlen(string)-1]);
        }
        else
        {
            printf("%s\n", string);
        }

    }

    return 0;
}
