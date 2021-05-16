#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt=0, x;
    char pl[101];
    scanf("%d",&n);//taking string lenth;

    scanf("%s",pl);//taking string;
    x = strlen(pl)-1;
    for(int i=0; i<n; i++)
    {
        if(pl[0]==83 && pl[x]==70)//check last and first digit in the string;
        {
            cnt++;
        }
    }
    if(cnt>0)
        printf("YES\n");
    else if(cnt<=0)
        printf("NO\n");
    return 0;
}
