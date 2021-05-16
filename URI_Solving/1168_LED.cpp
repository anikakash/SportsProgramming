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
    int t, i;
    char s[105];
    int  len, ans=0;
    cin>>t;
    while(t--)
    {
        cin>>s;
        len = strlen(s);

        for(i=0; i<len; i++)
        {
            if(s[i]=='1')
            {
                ans +=2;
            }
            else if(s[i]=='2')
            {
                ans+=5;
            }
            else if(s[i]=='3')
            {
                ans+=5;
            }
            else if(s[i]=='4')
            {
                ans+=4;
            }
            else if(s[i]=='5')
            {
                ans+=5;
            }
            else if(s[i]=='6')
            {
                ans+=6;
            }
            else if(s[i]=='7')
            {
                ans+=3;
            }
            else if(s[i]=='8')
            {
                ans+=7;
            }
            else if(s[i]=='9')
            {
                ans+=6;
            }
            else if(s[i]=='0')
            {
                ans+=6;
            }
        }
        cout<<ans<<" leds"<<endl;
        ans=0;
    }
    return 0;
}
