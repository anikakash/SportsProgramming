#include<bits/stdc++.h>
using namespace    std;

#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL           printf("\n")
#define pi           acos(-1.0) //3.1415926535897932384626
#define mx           7500000
#define dpoint(x)    fixed<<setprecision(x)
#define mod          1000000007
#define pb           push_back
#define scn(x)       scanf("%d",&x)
#define scnd(x)      scanf("%lf",&x)
#define sc(x)        scanf("%s",&x)

typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;



// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T gcd(T a, T b){if(a == 0) return b;return gcd ( b%a, a );}
template <class T> T lcm(T a, T b){return ( ( a/gcd ( a, b ) )*b );}
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
template <class T> T binaryToDec(T x){T ans=0, i=0, rem;while(x!=0){rem = x%10;x/=10;ans+=rem*pow(2,i);i++;}return ans;}
template <class T> T nod(T n){T c=0;for(T i=1; i*i<=n; i++)if(n%i==0)c+=(1+(i*i!=n));return c;}


int main()
{
   #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("out.txt","w",stdout);
   #endif
   
  int t, cnt=1; cin >> t;
  flush;
	while(t--){
		string s1, s2;
       
        getline(cin,s1);
        getline(cin,s2);
        int ans1=0, ans2=0;
        int ln1=s1.size();
        int ln2=s2.size();
        for(int i=0; i<ln1; i++)
        {
            s1[i]=tolower(s1[i]);
            if(s1[i]!=' ')ans1+=s1[i];
        }
        for(int i=0; i<ln2; i++)
        {
            s2[i]=tolower(s2[i]);
            if(s2[i]!=' ')ans2+=s2[i];
        }
        // cout<<s1<<endl;
        // cout<<s2<<endl;
       if(ans1==ans2)cout<<"Case "<<cnt++<<": Yes"<<endl;
       else cout<<"Case "<<cnt++<<": No"<<endl;
       s1.clear(); s2.clear();
	}
 
    return 0;
}
/// ----------------------------Funaction Descriptions----------------------------------//

//author anikaksh;