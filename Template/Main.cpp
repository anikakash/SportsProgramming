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


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    // constructor that takes a vector of values and builds a binary tree
    TreeNode(vector<int> values) {
        if (values.empty()) return; // empty tree
        val = values[0]; // root value
        queue<TreeNode*> q; // queue to store nodes
        q.push(this); // push root node
        int i = 1; // index to iterate over values
        while (!q.empty() && i < values.size()) {
            TreeNode* node = q.front(); // get the current node
            q.pop();
            if (values[i] != INT_MIN) { // check if left child exists
                node->left = new TreeNode(values[i]); // create left child
                q.push(node->left); // push left child
            }
            i++; // increment index
            if (i < values.size() && values[i] != INT_MIN) { // check if right child exists
                node->right = new TreeNode(values[i]); // create right child
                q.push(node->right); // push right child
            }
            i++; // increment index
        }
    }
};

 int minSteps(string s, string t) {
        map<char,int>m1, m2;
        for(int i=0; i<s.size(); i++){
            m1[s[i]]++;
            m2[t[i]]++;
        }
        int cnt=0;
        for(char c = 'a'; c<='z'; c++){
            if(m2[c]>m1[c])cnt+=(m2[c]-m1[c]);
        }
        return cnt;
}

int main() {
#ifdef anikakash
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);  
   freopen("out.txt", "w", stdout);
#endif
  
    FASTERIO; 
     
  int sum = 7 + 6 / 3 + 14 * 2;
  cout<<sum<<endl;

#ifdef anikakash
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}