#include<stdio.h>
int main()
{
	int n, l,i, cnt=0;
	scanf("%d",&n);
	for(i=1; i<n;i++){
		l=n-i;
		if(l%i==0){
			cnt++;
		}
	}
	printf("%d\n",cnt);
}

