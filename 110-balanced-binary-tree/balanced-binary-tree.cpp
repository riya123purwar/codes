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

    int geth(TreeNode* root,bool &isbal){
        if(root == NULL){
            return 0;
        }
        int left = geth(root->left,isbal);
        int right= geth(root->right,isbal);

        if(isbal && abs(left-right)>1){
            isbal= false;
        }

        int maxi = max(left, right);
        return maxi+1;
    }

    bool isBalanced(TreeNode* root) {
        bool isbal= true;
        geth(root,isbal );
        return isbal;
        
    }
};