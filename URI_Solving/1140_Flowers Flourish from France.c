#include<stdio.h>
#include<string.h>

int main()
{
    char a[1500];
    while(1)
    {
        gets(a);

        if(a[0] == '*')
        {
            break;
        }
        else
        {
            int ln, i, count = 0;
            ln = strlen(a);
            for(i=0; i<ln; i++)
            {
                a[i] = tolower(a[i]);
            }
            for(i=1;i<ln; i++)
            {
                if(a[i]==' ')
                {
                    if(a[i+1] != a[0])
                    {
                        count++;
                    }
                }
            }
            if(count>0) printf("N\n");
            else printf("Y\n");
        }
    }
    return 0;
}
