/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> findMode(TreeNode* root) {
       
        unordered_map<int,int>ump;
        dfs(root, ump);
        int mx=0;
        for(auto& [key, val]: ump){
            mx=max(mx,val);
        }
         vector<int>v;
        for(auto& [key, val]: ump){
            if(val==mx)v.push_back(key);
        }
        return v;
    }

    void dfs(TreeNode* node,unordered_map<int,int> &ump){
        if(node == nullptr) return;

        ump[node->val]++;
        dfs(node->left, ump);
        dfs(node->right, ump);
    }
};