#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define MaxN                     1000000007 //1e5
#define EPS                      1e-18
#define dpoint(x)                fixed<<setprecision(x)
#define Fill(ar, weight)         memset(ar, weight, sizeof(ar))
typedef long long int            ll;
typedef double                   dl;
typedef unsigned long long int   ull;
 int maxLength(vector<string>& arr) {
        sort(arr.begin(), arr.end(), [](string s1, string s2){return s1.size()>s2.size();});
        for(auto it: arr)cout<<it<<" ";NL;
        set<char>st;
        for(auto it: arr){
            unordered_set<char>tm;
            for(auto c : it){
                if(st.find(c)==st.end()){
                    tm.insert(c);
                   
                }else{
                    tm.clear(); break;
                }
            }

            if(tm.size()>0 && (tm.size() == it.size())){
                for(auto x : tm)st.insert(x);
            }
        }
        return st.size();
}


int main() {
#ifdef anikakash
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);  
   freopen("out.txt", "w", stdout);
#endif
  
    FASTERIO; 
   vector<string>vs = {"ab","cd","cde","cdef","efg","fgh","abxyz"};

    cout<<maxLength(vs)<<endl;

#ifdef anikakash
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}