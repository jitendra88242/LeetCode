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
    int findLeftHight(TreeNode* root){
        int high=0;
        while(root){
            high++;
            root=root->left;
        }
        return high;
    }
    int findRightHight(TreeNode* root){
        int high=0;
        while(root){
            high++;
            root=root->right;
        }
        return high;
    }
    int countNodes(TreeNode* root) {
        if(root==NULL) return 0;
        int lefth=findLeftHight(root);
        int righth=findRightHight(root);
        if(lefth==righth) return (pow(2,lefth)-1);
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};