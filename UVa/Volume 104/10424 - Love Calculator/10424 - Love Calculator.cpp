#include<bits/stdc++.h>
using namespace    std;

#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL           cout<<endl;
#define pi           acos(-1.0) //3.1415926535897932384626
#define mx           100005
#define dpoint(x)    fixed<<setprecision(x)
#define mod          1000000007
#define pb           push_back
#define scn(x)       scanf("%d",&x)
#define scnd(x)      scanf("%lf",&x)
#define sc(x)        scanf("%s",&x)
#define pb           push_back
#define switch1      1
#define switch2      0
#define Debug1(x)    cout<<"Value : "<<x<<endl;
#define Debug2       cout<<"List Print Check; ";

typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}

int main()
{
  //  #ifndef Brain_FUCK
  //       freopen("input.txt","r",stdin);
  //       freopen("out.txt","w",stdout);
  //  #endif
   
   string s1, s2;
   while(getline(cin,s1))
   {
     getline(cin,s2);
     int ln1=0, ln2=0, sum1=0, sum2=0, digit1=0, digit2=0;
     string x, y;

     ln1=s1.size();
     ln2=s2.size();

     for(int i=0; i<ln1; i++)
      {
          if(isalpha(s1[i]))
          {
            s1[i]=tolower(s1[i]);
              sum1+=s1[i]-96;
          }
      }
        digit1 = sum1;
        if(sum1>9)
        {
           while(digit1>=10){digit1=digitsum(digit1);}
        }

      for(int i=0; i<ln2; i++)
      {
          if(isalpha(s2[i]))
          {
            s2[i]=tolower(s2[i]);
            sum2+=s2[i]-96;
          }
      }
      digit2 = sum2;
        if(sum2>9)
        {
           while(digit2>=10){digit2=digitsum(digit2);}
        }
        double ans = ((min(digit2,digit1)*100.00)/(max(digit2,digit1)*100.00))*100.00;
        if(ans>100.00)cout<<"100.00 %"<<endl;
        else cout<<dpoint(2)<<ans<<" %"<<endl;
         s1.clear();
         s2.clear();
   }
    return 0;
}
