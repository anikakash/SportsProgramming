#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>//Common file
#include <ext/pb_ds/tree_policy.hpp>//Including tree_order_statistics_node_update

using namespace std;
using namespace __gnu_pbds;

///#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
///cout<<*X.find_by_order(1)<<endl;//iterator to the k-th largest element
///cout<<X.order_of_key(-5)<<endl;//number of items in a set that are strictly smaller than our item

typedef unsigned long long  ull;
typedef long long           ll;
typedef tree<ll, null_type,less<ll>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;

//-------------Maps------------------//
typedef map<int, int>mi;
typedef map<string, int>msi;
typedef map<string, string>mss;

//------------Pairs-------------------//
typedef pair<long,long>pll;
typedef pair<int,int>pii;
typedef pair<string, int>psi;
typedef pair<string, string>pss;

//-----------Vectors--------------------//
typedef vector<int>::iterator vit;
typedef vector<int>vi;
typedef vector<ll>vll;
typedef vector<pii>vii;
typedef vector<psi>vsi;
typedef vector<pss>vss;

//-------------Macros------------------//
#define fastIO        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction      cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define rep(i, a, b)  for(int i = a ; i < b ; i++)
#define debug(x)      cout<<"fcuk! = "<<x<<endl;
#define endl          '\n'
#define SS            first
#define FF            second
#define PB            push_back
#define MP            make_pair
#define setBits(x)    builtin_popcount(x)
#define all(a)       (a).begin(),(a).end()
#define sz(x)        (int)x.size()
#define mid(l,r)     ((r+l)>>1)
#define left(node)   (node*2)
#define right(node)  (node*2+1)

#define mem(a,b)      memset(a, b, sizeof(a) )
#define gcd(a,b)      __gcd(a,b)
#define sqr(a)       ((a) * (a))

#define mx_int_prime  999999937
#define MOD           1e8+123
const double PI = acos(-1);
const int mx = 1e7+123;
const double EPS = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;

template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
            return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
            os << "{";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "}";
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}

template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &v ) {
            os << "[";
                for(auto it = v.begin(#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)

void faltu () {
            cerr << endl;
}); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << it -> first << " = " << it -> second ;
                                            }
                    return os << "]";
}

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)

void faltu () {
            cerr << endl;
}

template <typename T>
void faltu( T a[], int n ) {
            for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
                cerr << endl;
}

template <typename T, typename ... hello>
void faltu( T arg, const hello &... rest) {
            cerr << arg << ' ';
                faltu(rest...);
}





signed main( )
{
    #ifdef anikakash
        clock_t t_start = clock();
        freopen("in.txt","r", stdin);
        freopen("output.txt","w", stdout);
    #endif
    fastIO;
    int v[10];
    mem(v,1);
    dbg(v);


#ifdef anikakash
    fprintf(stderr, "\n>> Runtime : %.10fs\n", (double)(clock()-t_start)/CLOCKS_PER_SEC);
#endif

    return 0;
}