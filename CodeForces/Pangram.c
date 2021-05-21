#include<stdio.h>
#include <ctype.h>
int main()
{

    int n, i, j, l=0;
scanf("%d", &n);
    char b[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char a[n];


        scanf("%s", a);

    for (j=0; j<n; j++)
          a[j]=toupper(a[j]);

      for (i=0; i<26; i++ )
      {
        for (j=0; j<n; j++)

               if (b[i]==a[j])
               {
                   l++;
                   break;
               }
      }
        if (l==26)
        {
            printf("YES\n");
        }
         else
         {
             printf("NO\n");
         }

    return 0;
}
