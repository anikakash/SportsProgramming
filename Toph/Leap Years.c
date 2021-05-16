#include<stdio.h>

int main()
{
    int y, result;

    scanf("%d", &y);

   if(y%400 != 0 && y%4 == 0)
   {
       printf("Yes\n");
   }
    else {
        printf("No\n");
    }
    return 0;
}
