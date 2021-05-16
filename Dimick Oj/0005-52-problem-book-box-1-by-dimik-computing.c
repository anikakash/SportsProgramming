/*
printf n*n box and printf new line after every box;
*/
#include<stdio.h>
int main()
{
    int row, col, number, test, index;
        scanf("%d", &test);

    for(index = 1; index <= test; index++){
    scanf("%d", &number);

    for(row = 1; row <= number; row++)
    {
    for(col = 1; col <= number; col++)
    {
        printf("*");
            }
        printf("\n");
            }
    if(index<test)

        printf("\n");


    }
    return 0;
}
