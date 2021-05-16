#include <stdio.h>

int main(void) {
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
	    char ch;
	    scanf("%c\n",&ch);
	    if(ch=='B' || ch=='b')
	    printf("BattleShip\n");
	    else if(ch=='C' || ch=='c')
	    printf("Cruiser\n");
	    else if(ch=='D' || ch=='d')
	    printf("Destroyer\n");
	    else
	    printf("Frigate\n");
	}// your code goes here
	return 0;
}
