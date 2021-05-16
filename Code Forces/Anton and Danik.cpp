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
    int i, t;
    string s;
    cin>>t;
    cin>>s;
    int a=0, b=0;
    for(i=0; i<t; i++){
        if(s[i]=='A'){
            a++;
        }
        else if(s[i]=='D'){
            b++;
        }
    }
    if(a>b){
        cout<<"Anton"<<endl;
    }
    else if(b>a){
        cout<<"Danik"<<endl;
    }
    else {
        cout<<"Friendship"<<endl;
    }
    //cout<<a<<" "<<b<<endl;

    return 0;
}

