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
    int maxPathSum(TreeNode* root) {
        int sum=INT_MIN;
        height(root , sum);
        return sum;
    }
    // so let us try to do 
    //using the diameter of a binary tree tecnique
    int height (TreeNode* node , int &sum) {
        if (!node) return 0;
        int left = max(0 ,height(node->left, sum) );
        int right = max(0, height(node->right , sum) );
        sum = max(sum , left+right+node->val);
        return node->val + max(left , right);
    }
    
};
