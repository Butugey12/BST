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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        //base case
        if(p==NULL || q==NULL) return (p==q);
       
        //if(p->val!=q->val) return false;
        bool left = isSameTree(p->left , q->left);
        bool right = isSameTree(p->right , q->right);
        return (p->val==q->val) && left && right;
    }
};
