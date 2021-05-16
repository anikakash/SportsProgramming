//thanks God For Every Thing!
//contest link:
#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
#define pi                      acose(-1)
#define rep(i,x)                for(int i=0; i<(x); i++)
#define rep1(i,x)               for(int i=1; i<=(x); i++)

typedef long long int           ll;
typedef double                  dl;
using namespace std;

int main()
{
    int rr[5], rr2[5];
    int i, j;
    for(i=0; i<5; i++){
        cin>>rr[i];
    }
    for(j=0; j<5; j++){
        cin>>rr2[j];
    }
    int cnt=0;
    for(i=0, j=0; i<5; i++, j++){
        if(rr[i]!=rr2[j]){
            cnt++;
        }
    }
    if(cnt==5) cout<<"Y"<<endl;
    else cout<<"N"<<endl;

    return 0;
}
