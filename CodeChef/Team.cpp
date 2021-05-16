//thanks God For Every Thing!
//contest link:

#include<bits/stdc++.h>
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
   
   int n, cnt=0;
   int x1, x2, x3;
   cin>>n;
   
   for(int i=0; i<n; i++)
   {
       cin>>x1>>x2>>x3;
       if(x1+x2+x3>1)
       {
           cnt++;
       }
   }
   
   

    cout<<cnt<<endl;
    
    return 0;
}
//author anikaksh;