#include <stdio.h>
#include<string.h>

int main()
{
	#ifdef anikakash
        //clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("out.txt","w",stdout);
   #endif
	printf("Enter a string : \n");
		char arr[50];
		scanf("%s", arr);
		for(int i=0; i<strlen(arr); i++)
			printf("%c",arr[i]+1);
	return 0;
}