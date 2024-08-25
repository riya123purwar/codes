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

    int getheight(TreeNode* root){
        if (root == NULL){
            return 0;
        }

        int left= getheight(root->left);
        int right= getheight(root->right);
        int maximum=max(left,right);
        int final=maximum+1;
        return final;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root ==NULL){
            return 0;
        }

        int leftdiameter = diameterOfBinaryTree(root->left);
        int rightdiameter = diameterOfBinaryTree(root->right);
        int both = getheight(root->left) + getheight(root->right);
        int maxdiameter= max(leftdiameter,max(rightdiameter,both));
        return maxdiameter;
    }
};