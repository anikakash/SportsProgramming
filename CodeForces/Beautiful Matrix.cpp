//thanks God For Every Thing!
//contest link:
#include<bits/stdc++.h>
#define pi                      acose(-1)
#define max                     170000
typedef long long int           ll;
typedef double                  dl;
using namespace std;

//void seive();
ll prime[max];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int i, j, row=0, col=0;
    int ar[6][6];
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            cin>>ar[i][j];
            if(ar[i][j]==1)
            {
                row = i;
                col = j;
            }
        }
    }
    //my soluations;
    if((row==1 || row==5) && (col==1 || col==5)) cout<<"4"<<endl;
    else if((row==1 || row==5) && (col==2 || col==4)) cout<<"3"<<endl;
    else if((row==1 || row==5) && col==3 ) cout<<"2"<<endl;

    else if((row==2 || row==4) && (col==1 || col==5)) cout<<"3"<<endl;
    else if((row==2 || row==4) && (col==2 || col==4)) cout<<"2"<<endl;
    else if((row==2 || row==4) && col==3 ) cout<<"1"<<endl;


    else if(row==3&&(col==1 || col==5)) cout<<"2"<<endl;
    else if(row==3 && (col==2 || col==4) ) cout<<"1"<<endl;
    else cout<<"0"<<endl;
        //improve code:
        /*int ans;
        ans = abs(row-2)+abs(col-2);
        cout<<ans<<endl;*/

    return 0;
}
/*
void seive()
{
    ll n, i, j;
    n = max;
    ll m=0;
    prime[m++]=2; //prime initialize;

    bool vis[n]= {}; //making false value to check;
    for(i=3; i<=n; i+=2) //checker;
    {
        if(vis[i]==false)
        {
            prime[m++]=i; //store prime
            for(j=i*i; j<=n; j+=i+i) vis[j]=true; //cut off not prime;
        }
    }
}
*/

