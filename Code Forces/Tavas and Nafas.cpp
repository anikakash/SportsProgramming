//thanks God For Every Thing!
//contest link:
#include<bits/stdc++.h>
#define pi                      acose(-1)

typedef long long int           ll;
typedef double                  dl;
using namespace std;
const int mx = 1e2+5;
void txt_gf();

int main()
{
    txt_gf();
}
void txt_gf()
{
    int n;
    cin>>n;

    if(n==0)
    {
        cout<<"zero";
        return;
    }
    if(n==10)
    {
        cout<<"ten";
        return ;
    }
    if(n<10)
    {
        if(n==1)cout<<"one";
        else if(n==2)cout<<"two";
        else if(n==3)cout<<"three";
        else if(n==4)cout<<"four";
        else if(n==5)cout<<"five";
        else if(n==6)cout<<"six";
        else if(n==7)cout<<"seven";
        else if(n==8)cout<<"eight";
        else if(n==9)cout<<"nine";
    }
    else
    {
        if(n/10>1)
        {
            int t = n;
            n/=10;
            if(n==2)cout<<"twenty";
            else if(n==3)cout<<"thirty";
            else if(n==4)cout<<"forty";
            else if(n==5)cout<<"fifty";
            else if(n==6)cout<<"sixty";
            else if(n==7)cout<<"seventy";
            else if(n==8)cout<<"eighty";
            else if(n==9)cout<<"ninety";
            t%=10;
            if(t==1)cout<<"-one";
            else if(t==2)cout<<"-two";
            else if(t==3)cout<<"-three";
            else if(t==4)cout<<"-four";
            else if(t==5)cout<<"-five";
            else if(t==6)cout<<"-six";
            else if(t==7)cout<<"-seven";
            else if(t==8)cout<<"-eight";
            else if(t==9)cout<<"-nine";
        }
        else
        {
            if(n==11)cout<<"eleven";
            else if(n==12)cout<<"twelve";
            else if(n==13)cout<<"thirteen";
            else if(n==14)cout<<"fourteen";
            else if(n==15)cout<<"fifteen";
            else if(n==16)cout<<"sixteen";
            else if(n==17)cout<<"seventeen";
            else if(n==18)cout<<"eighteen";
            else if(n==19)cout<<"nineteen";
        }

    }
    cout<<endl;

}

