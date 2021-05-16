#include<bits/stdc++.h>
using namespace std;

int is_prime(int n);
int main()
{
    int l, i;
    char s[20];
    while(gets(s))
    {
        l = strlen(s);
        int sum=0;
        for(i=0; i<l; i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                sum+=s[i]-'a'+1;
            }
            else
            {
                sum+=s[i]-'A'+27;
            }
        }
        if(1==is_prime(sum))
        {
            printf("It is a prime word.\n");
        }
        else
            printf("It is not a prime word.\n");
    }
    return 0;
}
int is_prime(int n)
{
    int i, root;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    root = sqrt(n);
    for(i=3; i<=root; i=i+2)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
