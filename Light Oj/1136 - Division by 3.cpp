//thanks God For Every Thing!
//contest link:
#include<bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#define pi           acose(-1)
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define NL           printf("\n")
#define fin          freopen("int.txt","r",stdin);
#define fout         freopen("out.txt","w",stdout);
 
using namespace std;
typedef long long int ll;
typedef double dl;
 
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
    int a, b;
 
    scanf("%d %d",&a,&b);
    printf("Case %d: %d\n",i, find(b)-find(a-1));
  }
    return 0;
}
int find(int x)
{
  int ans = (x/3)*2;
  if(x%3==2) ans++;
 
  return ans;
}
//author anikaksh;