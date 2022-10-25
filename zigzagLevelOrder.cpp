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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        bool flag =true;
        while(!q.empty()) {
            //lets first do a normal level order traversal;
            
            int size =q.size();
             vector<int> res (size);
            for(int i=0;i<size;i++) {
               int indx = (flag) ? i :(size-1-i); // if flag is true, insert the elements normally
                // else insert the elements from the back;
                TreeNode* node = q.front();
                q.pop();
                res[i] = node->val;
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
               
                
               
            }
            flag = !flag;
            ans.push_back(res);
        }
        return ans;
        
    }
};
