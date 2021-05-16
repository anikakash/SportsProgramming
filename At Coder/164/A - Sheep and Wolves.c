#include<stdio.h>

int main()
{
    int s, w;
    scanf("%d %d", &s, &w);

    if(w >= s)
    {
        printf("unsafe\n");
    }
    else{
        printf("safe\n");
    }
    return 0;
}
