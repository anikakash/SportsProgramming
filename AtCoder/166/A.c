#include<stdio.h>
#include<string.h>

int main()
{
    char a[3], str1[] = "ABC", str2[] = "ARC";
    scanf("%s", a);

    if(a == str1)
    {
        printf("ARC\n");
    }
    else if(a == str2)
    {
        printf("%ABC\n");
    }

    return 0;
}
