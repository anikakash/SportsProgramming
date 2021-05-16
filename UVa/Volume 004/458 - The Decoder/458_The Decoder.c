#include <stdio.h>
int main(void) {
	char s;
	while(scanf("%c",&s) != EOF){
		if(s != '\n'){
			printf("%c",s-7);
		}
		else {
			printf("\n");
		}
	}
	return 0;
}
