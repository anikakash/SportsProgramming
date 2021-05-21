#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l, top=0, low=0;
    char str[101];
    scanf("%s",str);
    l=strlen(str);
    for(int i=0; i<l; i++)
    {
        if(65<=str[i] && str[i]<=90)
        {
            top++;
        }
        else if(97<=str[i] && str[i]<=122)
        {
            low++;
        }
    }
    if(top>low)
    {
        for(int i=0; i<l; i++)
        {
            str[i]=toupper(str[i]);
        }

        printf("%s\n", str);
    }
    else if(low>=top)
    {
        for(int i=0; i<l; i++)
        {
            str[i]=tolower(str[i]);
        }
        printf("%s\n", str);
    }
    return 0;
}
