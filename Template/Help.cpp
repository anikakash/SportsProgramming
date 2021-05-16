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
#define pb           push_back
#define mx           10000007

typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}

int is_prime(ll n)
{
    ll i, root;
    if(n==2)
        return 1;
    if(n%2==0 || n==1)
        return 0;

    root = sqrt(n);
    for(i=3; i<=root; i = i+2)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

 
vector<ll>prime;
bool vis[mx];
void sieve() {
    ll x=sqrt((int)mx);
    for(ll i=3; i<=x; i+=2) {
        if(vis[i]==0) {
            for(ll j=i*i; j<mx; j+=2*i)
                vis[j]=1;
        }
    }
    prime.pb(2);
    for(ll i=3; i<mx; i+=2)
        if(vis[i]==0)
            prime.pb(i);
}

int main()
{
    #ifdef EXTRA_8
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("out.txt","w",stdout);
    #endif
        int t;
        cin>>t;
        for(int i=1; i<=t; i++)
        {
            int t1, t2, f, a, ct1, ct2, ct3;
            cin>>t1>>t2>>f>>a>>ct1>>ct2>>ct3;
            vector<int>vec;
            vec.pb(ct1);
            vec.pb(ct2);
            vec.pb(ct3);
            sort(vec.begin(), vec.end());
            ct1 = vec[1];
            ct2 = vec[2];
            ct3 = (ct1+ct2)*1.0/2.0;
            int ans = t1+t2+f+a+ct3;
            cout<<"Case "<<i<<": ";
            if(ans>=90)cout<<"A"<<endl;
            else if(ans<90 && ans>=80)cout<<"B"<<endl;
            else if(ans<80 && ans>=70)cout<<"C"<<endl;
            else if(ans<70 && ans>=60)cout<<"D"<<endl;
            else cout<<"F"<<endl;
           // cout<<ans;
        }
    #ifdef EXTRA_8
        fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    #endif
    return 0;
}
