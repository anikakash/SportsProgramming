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

    int maxDepth;
    int bottomLeft;

    void dfs(TreeNode* root, int currDepth){
        if(!root) return;

        if(currDepth>maxDepth){
            maxDepth = currDepth;
            bottomLeft = root->val;
        }
        dfs(root->left, currDepth+1);
        dfs(root->right, currDepth+1);
    }
    int findBottomLeftValue(TreeNode* root) {
        maxDepth = -1;
        dfs(root, 0);
        return bottomLeft;
    }
};