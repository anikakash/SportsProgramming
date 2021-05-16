#include <bits/stdc++.h>
using namespace std;
int main() {

	int n, x,y,j, i, sum=0;
	scanf("%d",&n);
	for( j=1; j<=n; j++){
			scanf("%d %d",&x,&y);
		for( i=x; i<=y; i++){
			if(i%2==1)sum+=i;
		}
		printf("Case %d: %d\n",j, sum);
		sum=0;
		}
	return 0;
}
