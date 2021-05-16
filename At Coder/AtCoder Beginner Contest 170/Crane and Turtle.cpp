#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, b, a;
   cin>> x >> y;
   b = (y/2)-x;
   a = (2*x)-(y/2);
   if(b>=0 && a>=0 && y%2==0){
    printf("Yes\n");
   }
   else{
    printf("No\n");
   }
}
