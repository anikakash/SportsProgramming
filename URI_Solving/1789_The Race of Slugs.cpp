#include <bits/stdc++.h>

using namespace std;

int n,t;
bool b,c;

int main(){
	while(scanf("%d",&n)==1){
		b = c = 0;
		while(n--){
			scanf("%d",&t);
			if(t < 10);
			else if(t < 20) b = 1;
			else c = 1;
		}
		if(c) printf("3\n");
		else if(b) printf("2\n");
		else printf("1\n");
	}
	return 0;
}
