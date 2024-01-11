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
    int ans=0;
    void dfs(TreeNode* root, int mn, int mx){
        if(root == NULL) return;
        int res = max(abs(root->val-mn), abs(root->val-mx));
        ans = max(ans, res);
        dfs(root->left, min(root->val, mn), max(root->val, mx));
        dfs(root->right, min(root->val, mn), max(root->val, mx));
    }
    int maxAncestorDiff(TreeNode* root) {
        ans=0;
        dfs(root->left, root->val, root->val);
        dfs(root->right, root->val, root->val);
        return ans;
    }
};