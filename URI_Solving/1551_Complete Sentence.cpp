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
    int t, i, j, x;
    string s;
    cin>>t;
    cin.ignore();
    for(i=1; i<=t; i++)
    {
        int cnt=0;
        getline(cin,s);
        int ln=0;
        ln = s.size();
        for(j=0; j<ln; j++)
        {
            if(s[j]>69 && s[j]<123)
            {
                if(s[j]!='1')
                {
                    for(x=j+1; x<ln;x++){
                        if(s[j]==s[x]){
                            s[x]='1';
                        }
                    }
                    cnt++;
                }
            }
        }
        //cout<<cnt<<endl;

        if(cnt==26) cout<<"frase completa"<<endl;
        else if(cnt>=13) cout<<"frase quase completa"<<endl;
        else if(cnt<13) cout<<"frase mal elaborada"<<endl;
        cnt=0;
    }
    return 0;
}
