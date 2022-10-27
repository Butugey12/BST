/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        ArrayList<Integer> arr1 = new ArrayList<>();
        ArrayList<Integer> arr2 = new ArrayList<>();
        getPaths(root ,arr1 , p.val );
        getPaths(root , arr2 , q.val);
        int k=0;
        for(int i=0;i< ( (arr1.size() < arr2.size()) ? arr1.size(): arr2.size() ) ; i++) {
            if(arr1.get(i) == arr2.get(i))
                k = arr1.get(i);
        }
        
        return new TreeNode(k);
    }
    // the other way;
    boolean getPaths(TreeNode root , ArrayList<Integer> ans , int x ) {
        if (root== null) return false;
        ans.add(root.val);
        if(root.val == x) return true;
        if(getPaths(root.left , ans , x )) return true;
        if(getPaths(root.right , ans , x )) return true;
        ans.remove(ans.size()-1);
        return false;
    }
}
// does not pass all the test cases
// but it would have been a great solution hahaha
