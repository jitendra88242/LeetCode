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
    int maxi=INT_MIN;
    int Depth(TreeNode* root){
        if(root==NULL) return 0;
        int leftSum=Depth(root->left);
        int rightSum=Depth(root->right);

        leftSum = max(0, leftSum);
        rightSum = max(0, rightSum);
        maxi=max(maxi,leftSum+rightSum+root->val);

        return (root->val)+max(leftSum,rightSum);
    }
    int maxPathSum(TreeNode* root) {
        Depth(root);
        return maxi;
    }
};