#include <stdio.h>
#include<string.h>
#include <ctype.h>
int main()
{
	#ifdef anikakash
        //clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("out.txt","w",stdout);
   #endif

	printf("Enter Test Case : \n");
		int n; 
		scanf("%d",&n);
		for(int i=1; i<=n; i++)
		{
			char ch;
			scanf("\n%c",&ch);
			if(isdigit(ch))printf("%d is a Digit\n", ch);
			else if((ch >='A' &&  ch<='Z') || (ch >='a' &&  ch<='z'))
			{
				printf("%C is an Alphabet : ", ch);
				if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
					printf("It is an Vowel\n");
				else printf("It is an Consonant\n");
			}
			else printf("%c is a special character\n",ch);
		}
		
	return 0;
}