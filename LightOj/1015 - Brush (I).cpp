//thanks God For Every Thing!
//contest link: 

//#include<bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>

/*

            

*/
#define pi           acose(-1)
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define NL           printf("\n")
#define fin          freopen("int.txt","r",stdin);
#define fout         freopen("out.txt","w",stdout);


using namespace std;

typedef long long int ll;
typedef double dl;

// ---------------------- slove---------------------------//



int main()
{
    //fin
    //fout
    int t, n, x, sum=0;
    scanf("%d",&t);
    for(int j=1; j<=t; j++)
    {
        scanf("%d",&n);
        for(int i=1; i<=n; i++)
        {
        scanf("%d",&x);
            if(x>0)
            {
                sum+=x;
            }
        }
        printf("Case %d: %d\n",j, sum);
        sum=0;
    }
    
   
    return 0;
}

//author anikaksh;