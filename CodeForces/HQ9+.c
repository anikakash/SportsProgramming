#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    int i, l, j=0;

    scanf("%s", &s);

    l = strlen(s);
    for(i=0; i<l; i++)
    {
        if(s[i] == 'H' || s[i] == '9' || s[i] == 'Q')
        {
            j =1;
        }
    }
        if(j == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    return 0;
}
