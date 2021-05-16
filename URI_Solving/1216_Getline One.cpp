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
    double n, temp=0, cnt=0, ave;
    string trash;
    char c;
    while(getline(cin, trash)){
        cin>>n;
        cin.ignore();//ignor bufer over flow;
        cnt++;
        temp+=n;
    }
    ave = temp/cnt;
    cout<<fixed << setprecision(1) <<ave<<endl;


    return 0;
}
