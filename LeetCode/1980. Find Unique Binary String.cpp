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


 string generate_allCombination(int ln, int sz ){
        string s="";
        while(ln){
            s = (ln%2==1 ? '1' : '0')+s;
            ln/=2;
        }
        if(s.size()!=sz)while(s.size()!=sz)s+='0';
        
        return s;
    }
    string findDifferentBinaryString(vector<string>& num) {

        unordered_set<std::string> numSet(num.begin(), num.end());
        int ln = num[0].size();
            string ans;
        for(int i=0; i<(1<<ln); i++){
            string s = generate_allCombination(i, ln);
            if (numSet.find(s) == numSet.end()) {
                ans=s; break;
            }
        }
        return ans;
    }

int main() {
#ifdef anikakash
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);  
   freopen("out.txt", "w", stdout);
#endif
  
    FASTERIO; 
   vector<std::string> binaryStrings = {"111", "011", "001"};

    string s = findDifferentBinaryString(binaryStrings);
    cout<<s<<endl;
   
    
#ifdef anikakash
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}