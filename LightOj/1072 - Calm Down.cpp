//thanks God For Every Thing!
//contest link:
//#include<bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#define pi           (acos(-1.0)) //3.1415926535897932384626
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define NL           printf("\n")
#define fin          freopen("int.txt","r",stdin);
#define fout         freopen("out.txt","w",stdout);
 
using namespace std;
typedef long long int ll;
typedef double dl;
typedef unsigned long long ul;
 
// ---------------------- slove---------------------------//
int find(int n);
int main()
{
  //fin
  //fout
  int t;
  scanf("%d",&t);
  for(int i=1; i<=t; i++)
  {
    int n;
    dl R, angle=0.0, r=0.0, sn_angl=0.0;

    scanf("%lf %d",&R,&n);

    angle = pi/(n*1.0);
    sn_angl = sin(angle);
    r = sn_angl*(R/(1+sn_angl));

    printf("Case %d: %.10lf\n",i, r);
  }
    return 0;
}
//author anikaksh;