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
    int ln=0, d =  0, c = 0;
    string s, digit="", chr="";
    cin>>s;
    ln = s.size();
    for(int i=0; i<ln; i++){
        if(isdigit(s[i])){
                digit+=s[i];
            //d++;
        }
        else{
            chr+=s[i];
            //c++;
        }
    }
    sort(digit.begin(),digit.end());
    sort(chr.begin(),chr.end());
    for(int i=0; i<ln; i++){
        if(isdigit(s[i])){
            s[i]=digit[d];
            d++;
        }
        else{
            s[i]=chr[c];
            c++;
        }
    }
    cout<<s<<endl;

    return 0;
}

