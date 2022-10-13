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
    bool helper(TreeNode* l, TreeNode*r){
        if(l==NULL or r==NULL)return l==r;
        
        return l->val==r->val and helper(l->left, r->right) and helper(l->right, r->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)return true;
        if(helper(root->left, root->right))return true;
        return false;
    }
};