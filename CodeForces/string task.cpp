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
    string s1, s2;
    cin>>s1;
    for(int i=0; i<s1.size(); i++)
    {
        s1[i]=tolower(s1[i]);
    }
    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u' || s1[i]=='y')
        {

        }
        else
        {
            cout<<"."<<s1[i];
        }
    }

    return 0;
}


