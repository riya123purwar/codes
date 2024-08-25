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

    int geth(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int left = geth(root->left);
        int right= geth(root->right);
        int maxi = max(left, right);
        return maxi+1;
    }

    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }

        int lh = geth(root->left);
        int rh = geth(root->right);
        int absdiff = abs(lh-rh);
        bool status = (absdiff <=1);

        //baaki recursion dekh lega

        int leftbal= isBalanced(root->left);
        int rytbal = isBalanced(root->right);

        if(status && leftbal && rytbal){
            return true;
        }
        else{
            return false;
        }

    }
};