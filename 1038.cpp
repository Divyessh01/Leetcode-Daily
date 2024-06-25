// 1038. Binary Search Tree to Greater Sum Tree

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
    TreeNode* bstToGst(TreeNode* root) {
        int curr = 0;

        traverse(root, curr);

        return root;
    }

private:
    void traverse(TreeNode* root, int& curr){
        if(!root){
            return;
        }

        traverse(root->right, curr);

        curr += root->val;
        root->val = curr;

        traverse(root->left, curr);
    }
};