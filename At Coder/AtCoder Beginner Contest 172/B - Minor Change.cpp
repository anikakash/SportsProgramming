#include<bits/stdc++.h>
#define pi acose(-1)
#define rep(i,x) for(int i=0; i<(x); i++)
typedef long long ll;
using namespace std;

int main()
{
    char s1[200001], s2[200001];
    int ln, i, cnt=0;
    cin>>s1>>s2;
    ln = strlen(s1);

    rep(i,ln){
        s1[i]= tolower(s1[i]);
        s2[i]= tolower(s2[i]);
    }
    rep(i,ln){
        if(s1[i]!=s2[i]){
            cnt++;
        }
    }
    printf("%d\n", cnt);

    return 0;
}
