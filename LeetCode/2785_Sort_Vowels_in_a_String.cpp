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

 bool chkVowl(char c){
        if(c=='a' || c=='e' || c =='i' || c=='o'|| c=='u' || c=='A' || c=='E' || c =='I' || c=='O'|| c=='U')
        return true;
        
        return false;
}
string sortVowels(string s) {
        string ss="";
        for(int i=0; i<s.size(); i++){
            if(chkVowl(s[i])) ss+=s[i];
        }

        sort(ss.begin(), ss.end());
        int x=0;
         for(int i=0; i<s.size(); i++){
            if(chkVowl(s[i])){
                swap(s[i],ss[x]);
                x++;
            }
        }
        return s;
        
}

int main() {
#ifdef anikakash
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);  
   freopen("out.txt", "w", stdout);
#endif
  
    FASTERIO; 
   string ans = sortVowels("lEetcOde");
   cout<<ans<<endl;
    
#ifdef anikakash
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}