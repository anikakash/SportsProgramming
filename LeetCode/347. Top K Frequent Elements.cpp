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


struct node{
    int val;
    int freq;
    node(int a, int b){
        val = a; freq = b;
    }
};
struct compare{
    bool operator()(node const &a, node const &b){
        return a.freq <b.freq;
    }
};


vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int>mp;
        vector<int>v;
        for(int i=0; i<nums.size(); i++) mp[nums[i]]++;
        
        priority_queue<node, vector<node>,compare>heap;

    for(auto it: mp)heap.push(node(it.first, it.second));

    while(k--){
        node temp = heap.top();
        heap.pop();
        v.push_back(temp.val);
    }
    
    return v;
}


int main() {
#ifdef anikakash
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);  
   freopen("out.txt", "w", stdout);
#endif
  
    FASTERIO; 
    
  vector<int>v={1,2};
  vector<int>ans = topKFrequent(v, 2);
  for(auto it: ans)cout<<it<<" ";
    cout<<endl;


#ifdef anikakash
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}