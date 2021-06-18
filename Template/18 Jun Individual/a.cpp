#include<bits/stdc++.h>
using namespace    std;

#define flush                   cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                      cout<<endl;
#define pi                      acos(-1.0) //3.1415926535897932384626
#define pb                      push_back
#define mx                      10000007
#define EPS                     1e-10
#define dpoint(x)               fixed<<setprecision(x)
#define debug1(a)               cout<<" "<<a<<" = ";
#define debug2(b)               cout<<b<<endl;
typedef long long int           ll;
typedef double                  dl;
typedef unsigned long long      ul;

// -----------------------Pre made Functions & Proto Type------------------------//
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
int gcd(int a, int b){ int x ; return x = __gcd(a, b);}
int lcm(int a, int b){int y; return y = ((a)*((b)/gcd(a,b)));}

//------------------------------GlobalVariable----------------------------------//




//---------------------------------Functions------------------------------------//

//-------------------------------MAIN FUNCTION---------------------------------//
int main()
{
   #ifdef anikakash
        clock_t tStart = clock();
        freopen("in.txt","r",stdin);
        freopen("ot.txt","w",stdout);
   #endif
        int caseno; 
        cin>>caseno;
        while(caseno--)
        {
            string s;
            vector<char>arr;
            cin>>s;

           // if(s.size()==1)arr.pb(s[0]);

            for(int i=0; i<s.size(); i++)
            {
               if(s[i]==s[i+1]) i++;
               else arr.pb(s[i]);

               //cout<<s[i]<<" ";
            }
               sort(arr.begin(), arr.end());
           // NL;
               //    cout<<"ANS: ";
               // for(int i=0; i<arr.size();i++)
               //    cout<<arr[i];
               // NL;
            if(arr.empty()!=1)
               {
                  for(int i=0; i<arr.size(); i++)
                  {
                     if(arr[i]!=arr.size()-1)
                        if(arr[i]!=arr[i+1])cout<<arr[i];
                     else 
                        if(arr[i]!=arr[i-1])cout<<arr[i];
                  }
                  NL;
               }
            else NL;
        }

   #ifdef anikakash
      fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
   #endif

    return 0;
}

