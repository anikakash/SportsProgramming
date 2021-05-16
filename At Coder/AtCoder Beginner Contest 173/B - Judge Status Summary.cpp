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

//void bobule_sort(int list[MX]);

int main()
{
    int t;
    char ch[4];
    int ac=0, tl=0, re=0, wa=0;
    cin>>t;
    while(t--){
        scanf("%s", ch);
        if(strcmp(ch,"AC")==0) ac++;
        else if(strcmp(ch,"WA")==0) wa++;
        else if(strcmp(ch,"TLE")==0) tl++;
        else if(strcmp(ch,"RE")==0) re++;
    }
    printf("AC x %d\n", ac);
    printf("WA x %d\n", wa);
    printf("TLE x %d\n", tl);
    printf("RE x %d\n", re);

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

