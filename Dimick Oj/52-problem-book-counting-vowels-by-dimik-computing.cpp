//thanks God For Every Thing!
//contest link:
#include<bits/stdc++.h>
#define pi           acose(-1)
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);



using namespace std;

typedef long long int           ll;
typedef double                  dl;



int main()
{
    wow
    int t;
    cin>>t;
    flush
    for(int j=1;j<=t; j++)
    {
        string s, k;
        int ln=0, cnt=0, i;

        getline(cin,s);
        ln = s.size();
        for(i=0; i<ln; i++)
        {
            //k[i]=tolower(s[i]);
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                cnt++;
            }
        }
        cout<<"Number of vowels = "<<cnt<<endl;
        cnt=0;
    }
    return 0;
}
