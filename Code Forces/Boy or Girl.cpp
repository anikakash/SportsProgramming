//thanks God For Every Thing!
//contest link:
#include<bits/stdc++.h>
#define pi           acose(-1)
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define max          170000

using namespace std;

typedef long long int           ll;
typedef double                  dl;


int main()
{
    int od=0, ev=0, ln=0, to=0;
    string s, f;
    cin>>s;
    ln=s.size();
    for(int i=0; i<ln; i++)
    {
        for(int j=i+1; j<ln; j++)
        {
            //wjmzbmr

            if(s[i]==s[j])
            {
                s[j]=0;
            }
        }
    }
    for(int i=0; i<ln; i++)
    {
        if(s[i]!=0)to++;
    }
    //cout<<to<<endl;
    if(to%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }

    return 0;
}

