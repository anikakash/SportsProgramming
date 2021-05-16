#include<bits/stdc++.h>
using namespace    std;

#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL           cout<<endl;
#define pi           acos(-1.0) //3.1415926535897932384626
#define dpoint(x)    fixed<<setprecision(x)
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
        freopen("out.txt","w",stdout);
    #endif
        int n;
        cin>>n;
        flush;
        while(n--)
        {
            string s; bool flg = true;
            getline(cin,s);
            stack<char> stak;
            int ln = s.size();
                for(int i=0; i<ln; i++)
                {
                    if(s[i]=='(' || s[i]== '[')
                        stak.push(s[i]);
                    else 
                    {
                        if(stak.empty())
                        {
                            flg = false; break;
                        }
                        else if(s[i]==')')
                        {
                            if(stak.top()=='('){
                                stak.pop();
                            }
                            else {
                                flg = false; break;
                            }
                        }
                        else if(s[i] == ']')
                        {
                            if(stak.top()=='['){
                                stak.pop();
                            }
                            else {
                                flg = false; break;
                            }
                        }
                    }
                }
            if(!stak.empty() || !flg) cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
    #ifdef EXTRA_8
        fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    #endif
    return 0;
}
