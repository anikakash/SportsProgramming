#include<bits/stdc++.h>
using namespace    std;

#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;


int main()
{
  int t;
  cin>>t;
  while (t--)
  {
      ll n, F_Operation=0;
      int rem=0;
       string s;
       cin>>n;
          F_Operation = ((((((n*567)/9)+7492)*235)/47)-498);
          rem = F_Operation%1000;
          s = to_string(rem);
          if(s[0]=='-')
          {
               if(s.size() == 4)cout<<s[2]<<endl;
               else if(s.size() == 3)cout<<s[1]<<endl;
               else cout<<0<<endl;
          }
          else 
          {
               if(s.size()==3) cout<<s[1]<<endl;
               else if(s.size()==2) cout<<s[0]<<endl;
               else cout<<0<<endl;
          }
          //cout<<F_Operation;
  }
  
  
    return 0;
}