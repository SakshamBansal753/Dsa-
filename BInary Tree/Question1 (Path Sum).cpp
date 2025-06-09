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
bool sumhelp(TreeNode* root,int &target,int sum){
    if(!root) return false;
    sum+=root->val;
    if(!root->left&&!root->right){
       
        return target==sum;
    }
    bool l=sumhelp(root->left,target,sum);
    bool r=sumhelp(root->right,target,sum);
  
    return l||r;
}
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root)return false;
        return sumhelp(root,targetSum,0);
    }
};
//DFS problem where we first visited entire path then we go to another path with a faithin recursion that it will definately find the solution of this
