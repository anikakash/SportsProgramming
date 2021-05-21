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
    string s;
    int i, t, sum=0;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>s;
        if(s[0]=='T')
        {
            sum+=4;
        }
        else if(s[0]=='C')
        {
            sum+=6;
        }
        else if(s[0]=='O')
        {
            sum+=8;
        }
        else if(s[0]=='D')
        {
            sum+=12;
        }
        else if(s[0]=='I')
        {
            sum+=20;
        }
    }
    cout<<sum<<endl;
    return 0;
}
/*Tetrahedron 4
Cube 6
Octahedron 8
Dodecahedron 12
Icosahedron 20
*/

