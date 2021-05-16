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
const int MX= 2e3+5;
int arr[MX];
int n;
void bobule_sort(int list[MX]);

int main()
{
    int n, a, b;
    while(cin>>n && n!=0)
    {
        int cnt_a=0, cnt_b=0;
        rep(i,n){
        cin>>a>>b;
        if(a>b) cnt_a++;
        else if(b>a) cnt_b++;
    }
    cout<<cnt_a<<" "<<cnt_b<<endl;
    }


    return 0;
}
/*void bobule_sort(int list[MX])
{
    int i, j, temp, cnt=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(list[j]>list[j+1])
            {
                temp      = list[j];
                list[j]   = list[j+1];
                list[j+1] = temp;
            }
        }
    }
}*/

