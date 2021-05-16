//thanks God For Every Thing!
//contest link:
#include<bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdlib>
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
int GCD(int a, int b)
{
  int c, d;
  if(a>b) c = b, d = a;
  else c = a, d = b; ///min = c, max = d;
  int g;
  if(c==0) g = d;
  else if(d%c==0) g= c;
  else g = GCD(c, d%c);

  return abs(g);
}

int main()
{
  //fin
  //fout
 int a, sum=0;
  while(cin>>a)
  {
    if(a==0) return 0;
      for(int i=1; i<a; i++)
    {
    for(int j=i+1; j<=a; j++)
      {
        sum+=GCD(i,j);
      }
    }
    //int g = GCD(a,b);
    cout<<sum<<endl;
  }
  return 0;
}

//author anikaksh;