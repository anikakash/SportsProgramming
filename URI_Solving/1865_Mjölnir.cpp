//thanks God For Every Thing!
//contest link:
#include<bits/stdc++.h>
#define pi                      acose(-1)

typedef long long int           ll;
typedef double                  dl;
using namespace std;
const int mx = 1e2+5;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int x;
	int c;
	char name[15];

	scanf("%d",&x);

	for(int i=0;i<x;i++)
	{
		scanf("%s",name);
	    scanf("%d",&c);

		if(name[0]=='T' && name[1]=='h' && name[2]=='o' && name[3]=='r')
		printf("Y\n");
		else printf("N\n");

	}
	return 0;
}
