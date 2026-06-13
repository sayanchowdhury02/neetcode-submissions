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
bool check(TreeNode* root, TreeNode* subRoot)
{
   if(root==nullptr && subRoot==nullptr) return true;
   if(root==nullptr || subRoot==nullptr) return false;
bool x=check(root->left,subRoot->left);
bool y=check(root->right, subRoot->right);
    return((root->val==subRoot->val)&& x&&y);
    
    
}
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
         if(root==nullptr || subRoot==nullptr) return true;
         //traverse the full tree
         TreeNode* head=root;
         queue<TreeNode*>q;
         q.push(root);
         while(!q.empty())
         {
            TreeNode* t=q.front();
            q.pop();
                if(t->left)
                q.push(t->left);
                if(t->right)
                q.push(t->right);
            
        if(check(t,subRoot)) return true;
         }
         
         
         return false;
    }


    
        
    

};
