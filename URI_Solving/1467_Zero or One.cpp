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
    int a, b, c;
    while(cin>>a>>b>>c)
    {

        if(a==b && a==c){
             printf("*\n");
        }

        else
        {

            if(a==b)
                 printf("C\n");
            if(a==c)
                 printf("B\n");
            if(b==c)
                 printf("A\n");

        }
    }

    return 0;
}
