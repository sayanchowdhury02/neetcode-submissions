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
int c=0;
int diam(TreeNode* root)
{
    if(!root)
    return 0;
    int l=diam(root->left);
    int r =diam(root->right);
   
  
     c=max(c,l+r);
       return 1+max(l,r);

}
    int diameterOfBinaryTree(TreeNode* root) {
    diam(root);
        return c;
    }
};
