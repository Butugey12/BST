/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL || root ==p || root == q) return root;  
        TreeNode* A = lowestCommonAncestor(root->left, p, q);
        TreeNode* B = lowestCommonAncestor(root->right, p, q);
       
        //if(  (root->left==NULL && root->right==NULL )   ) return NULL;
        
        
        
        // between null and something always return somethi
        
        if (A==NULL ) return B;
        if(B==NULL ) return A;
        return root;
        
        
    }
    
};
