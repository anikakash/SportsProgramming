#include<bits/stdc++.h>

using namespace std;


int main()
{
	int a,b,c=1;
	scanf("%d",&a);
	for(b=1;b<=a;b++){
	c=(c*b)%10000;
	
	}
	printf("%d",c);
	return 0;
}
