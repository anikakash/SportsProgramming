#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,k,n,sum=0;
   cin>>t>>k;
   int ar[t];
   for(int i=0;i<t;i++){
     cin>>ar[i];
   }
	n = sizeof(ar)/sizeof(ar[0]);
    sort(ar,ar+n);
   for(int j=0;j<k;j++){
     sum = sum + ar[j];
   }
   cout << sum <<endl;
}
