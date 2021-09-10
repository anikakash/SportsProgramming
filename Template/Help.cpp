#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    #ifdef anikakash
       freopen("INPUT.txt","r",stdin);
       freopen("output.txt","w",stdout); 
  #endif

    ll t,a=0,i,b=0,f=0,g=0,h=0,c=0;
  string s1,s2,s3,s4,s5;
  cin>>t;
  while(t--)
  {
    f=0,g=0,h=0,a=0,b=0,c=0;
    cin>>s1>>s2>>s3>>s4>>s5;
    cout<<'\n';
    for(i=0;i<s1.length();i++)
    {
        if(s1[i]=='m')
            {
                f=1;
                break;
            }
    }
    for(i=0;i<s3.length();i++)
    {
        if(s3[i]=='m')
        {
            g=1;
            break;
        }
    }
    for(i=0;i<s5.length();i++)
    {
        if(s5[i]=='m')
        {
            h=1;
            break;
        }
    }
    if(f==0)
    {
        for(i=0;i<s1.length();i++)
        {
            a=a+(s1[i]-'0')*pow(10,(s1.length()-(i+1)));
        }
    }
    if(g==0)
    {
        for(i=0;i<s3.length();i++)
        {
            b=b+(s3[i]-'0')*pow(10,(s3.length()-(i+1)));
        }
    }
    if(h==0)
    {
        for(i=0;i<s5.length();i++)
        {
            c=c+(s5[i]-'0')*pow(10,(s5.length()-(i+1)));
        }
    }
    if(f==0&&g==0)
    {
        cout<<s1<<' '<<s2<<' '<<s3<<' '<<s4<<' '<<(a+b)<<'\n';
    }
    if(f==0&&h==0)
    {
        cout<<s1<<' '<<s2<<' '<<(c-a)<<' '<<s4<<' '<<s5<<'\n';
    }
    if(g==0&&h==0)
    {
        cout<<(c-b)<<' '<<s2<<' '<<s3<<' '<<s4<<' '<<s5<<'\n';
    }
  }
    return 0;
}