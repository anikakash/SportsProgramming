#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define MaxN                     1000000 //1e7
#define EPS                      1e-18
#define dpoint(x)                fixed<<setprecision(x)
#define Fill(ar, weight)         memset(ar, weight, sizeof(ar))
typedef long long int            ll;
typedef double                   dl;
typedef unsigned long long int   ull;

int lcm(ll a, ll b){return (a*b)/__gcd(a,b);}

ll get_hash(string s, ll mod){
    ll pow = 31;
    ll pr =1;
    ll Hash_value = 0;
    for(int i=0; i<s.size(); i++){
        char ch = s[i];
        Hash_value = (Hash_value+(ch-'a'+1)*pr)%mod;
        pr = (pr*pow)%mod;
    }
    return Hash_value;
}

void solve() {
    ll mod1 = 1006969;
    ll mod2 = 1001669;
    map<pair<ll,ll>, string>mp;
   string line;
   while(1){
        getline(cin,line);
        if(line.empty()) break;
        stringstream ss;
        ss<<line;
        string word, s1, s2; bool f=true;
        while(ss>>word){
            if(f){s1=word; f=false;}
            else s2=word;
        }
        ll hash1 = get_hash(s2, mod1);
        ll hash2 = get_hash(s2, mod2);
        mp[{hash1,hash2}]=s1;
        // cout<<s1<<" "<<s2<<endl;
   }
   string s;
   while(cin>>s){
        ll hash1 = get_hash(s,mod1);
        ll hash2 = get_hash(s,mod2);
        if(mp[{hash1,hash2}]=="")cout<<"eh"<<"\n";
        else cout<<mp[{hash1, hash2}]<<"\n";
   }
}

int gate=0;
int main() {

    FASTERIO;
    solve();
    return 0;
}