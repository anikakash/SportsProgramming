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

int ans;
void build_graph(TreeNode* root, vector<vector<int>> &adj){
    if(root == NULL) return;

    if(root->left){
        adj[root->val].push_back(root->left->val);
        adj[root->left->val].push_back(root->val);
    }
    if(root->right){
        adj[root->val].push_back(root->right->val);
        adj[root->right->val].push_back(root->val);
    }
    build_graph(root->left, adj);
    build_graph(root->right, adj);
}

void bfs(int start, vector<vector<int>> &adj, vector<bool>&vis){
    queue<int>q;
    q.push(start);

    while(!q.empty()){
        int k = q.size();

        while(k--){
            int u = q.front();
            q.pop();
            vis[u]=1;
            for(int i=0; i<adj[u].size(); i++){
                if(!vis[adj[u][i]]){
                    q.push(adj[u][i]);
                }
            }
        }
        ans++;
    }
}

int amountOfTime(TreeNode* root, int start) {
        vector<vector<int>> adj(100001);
        build_graph(root, adj);

        for(int i=0; i<adj.size(); i++){
            if(adj[i].size()>0){
                for(int j=0; j<adj[i].size(); j++){
                    cout<<adj[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        cout<<"\n \nans\n";

        vector<bool>vis(100001);
        ans=0;
        bfs(start, adj, vis);
        return ans-1;
}

int main() {
#ifdef anikakash
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);  
   freopen("out.txt", "w", stdout);
#endif
  
    FASTERIO; 
     
   vector<int> values = {1,5,3,INT_MIN,4,10,6,9,2};
    TreeNode* root = new TreeNode(values); 
   cout<< amountOfTime(root, 3)<<endl;

#ifdef anikakash
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}