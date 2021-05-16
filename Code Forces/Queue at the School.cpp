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
    wow
    int n, t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int i=0; i<t; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
                swap(s[j], s[j+1]);
                j++;
            }
        }
    }
    cout<<s<<endl;

    return 0;
}

