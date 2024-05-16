// 2331. Evaluate Boolean Binary Tree

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

    int solve(TreeNode* root){
        if(root->val == 0 || root->val == 1){
            return root->val;
        }

        bool isor = true;
        if(root->val == 2)  isor = true;
        else if(root->val == 3) isor = false;

        return ((isor) ? (solve(root->left) || solve(root->right)) : (solve(root->left) && solve(root->right)));

    }

    bool evaluateTree(TreeNode* root) {
        if(root->val == 0 || root->val == 1){
            return root->val;
        }

        bool isor = true;
        if(root->val == 2)  isor = true;
        else if(root->val == 3) isor = false;

        return ((isor) ? (solve(root->left) || solve(root->right)) : (solve(root->left) && solve(root->right)));
    }
};