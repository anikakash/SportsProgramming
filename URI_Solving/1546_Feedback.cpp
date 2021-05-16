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
//const int MX= 2e3+5;
//int arr[MX];
//int n;
//void bobule_sort(int list[MX]);

int main()
{
    int n, k, x, to;
    cin>>n;
    while(n--)
    {
        cin>>k;
        while(k--)
        {
            cin>>x;
            switch(x)
            {
            case 1:
                cout<<"Rolien"<<endl;
                break;
            case 2:
                cout<<"Naej"<<endl;
                break;
            case 3:
                cout<<"Elehcim"<<endl;
                break;
            case 4:
                cout<<"Odranoel"<<endl;
                break;
            }

        }
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

