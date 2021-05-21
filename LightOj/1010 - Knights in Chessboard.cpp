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
   // fout
   
   int t, n, c1, c2, to=0, fix_ans, big;
   dl ans;
   scanf("%d",&t);

   for(int i=1; i<=t; i++)
   {
        scanf("%d %d",&c1,&c2);
       if(c1==1 || c2==1)
       {
            big = max(c1,c2);
            printf("Case %d: %d\n", i, big);
       }
       else if(c1==2 || c2==2)
       {
           big = max(c1,c2);
           fix_ans = big;
           if(big%4==1 || big%4==3) fix_ans++;
           if(big%4==2) fix_ans+=2;
           printf("Case %d: %d\n", i, fix_ans);
       }
       else
       {
            to = c1*c2;
            ans = (to*1.0)/2;
            fix_ans = ceil(ans);
            printf("Case %d: %d\n", i, fix_ans);
       }
       
       
   }
    
    return 0;
}
//author anikaksh;