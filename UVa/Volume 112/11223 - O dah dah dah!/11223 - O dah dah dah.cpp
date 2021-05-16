#include<bits/stdc++.h>
using namespace    std;

#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL           cout<<endl;
#define pi           acos(-1.0) //3.1415926535897932384626
#define dpoint(x)    fixed<<setprecision(x)
#define mod          1000000007
#define pb           push_back
#define debug(x)     cout<<x<<endl;
#define gcd(a,b)     __gcd(a,b);
#define lcm(x,y)     (a * (b / gcd(a, b)));

typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}

int main()
{
     #ifdef EXTRA_8
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("ans.txt","w",stdout);
     #endif
    vector<string> x  {".-", "-...", "-.-.", "-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..","-----",".----","..---","...--","....-",".....","-....","--...","---..","----.",".-.-.-","--..--","..--..",".----.","-.-.--","-..-.","-.--.","-.--.-",".-...","---...","-.-.-.","-...-",".-.-.","-....-","..--.-",".-..-.",".--.-."};
    string c  {"ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789.,?'!/()&:;=+-_\"@"};
   
   //cout<<c<<endl; 
    // for(int i=0; i<53; i++)
    //   cout<<c[i]<<" "<<x[i]<<endl;
    int t;
    cin>>t;
    flush;
    for(int k=1; k<=t; k++)
    {
        string s, tmp;
        getline(cin,s);
        cout<<"Message #"<<k<<endl;
        for(int i=0; i<s.size(); i++)
        { 
            if(s[i]==' ')
            {
                for(int j=0; j<53; j++) if(tmp == x[j])cout<<c[j];
                if(s[i+1]==' '){cout<<" "; i++;}
                tmp.clear();
            }
            else tmp+=s[i];
        }
        for(int i=0; i<53; i++)
        {
            if(tmp == x[i])
            {
                cout<<c[i];
                tmp.clear();
                break;
            }
        }
        if(k<t)cout<<endl<<endl;
        else cout<<endl;

    }
    
     #ifdef EXTRA_8
        fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
     #endif
    return 0;
}
