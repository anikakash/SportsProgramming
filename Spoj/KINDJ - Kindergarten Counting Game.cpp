//thanks God For Every Thing!
//contest link:
//#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
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
    int cnt=0;
    while(getline(cin,s))
    {
        for(int i=0; i<s.size(); i++)
        {
            if((s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122) && (s[i+1]<=64 || (s[i+1]>=91 && s[i+1]<=96) || s[i+1]>=123 ))
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
        cnt=0;
    }


    return 0;
}
