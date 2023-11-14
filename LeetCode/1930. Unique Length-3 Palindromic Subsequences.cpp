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

 int countPalindromicSubsequence(string s) {
        
        unordered_set<char>letters;
        for(int i=0; i<s.size(); i++){
            letters.insert(s[i]);
        }
        int ans = 0;
       for(char letter: letters){
            int left_idx = -1;
            int right_idx = -1;

            for(int i=0; i<s.size(); i++){

                if(s[i]==letter){
                    if(left_idx==-1)left_idx=i;
                    right_idx= i;
                }
            }
            unordered_set<char>ch;
            for(int middle = left_idx+1; middle<right_idx; middle++){
                ch.insert(s[middle]);
            }
            ans+=ch.size();
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
   int val = countPalindromicSubsequence("aabca");
   cout<<val<<endl;
    
#ifdef anikakash
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}