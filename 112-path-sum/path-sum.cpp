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

bool solve(TreeNode* root, int targetSum, int sum){
    if(root == NULL){
        return false;
    }

    sum = sum+ root->val;

    if(root->left == NULL && root->right == NULL){
        //leaf node aagyi h 
        if(sum == targetSum){
            return true;
        }
        else{
            return false;
        }
    }

    bool left= solve(root->left, targetSum, sum);
    bool ryt=solve(root->right, targetSum,sum);

    return (left || ryt);

}

    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
        bool ans= solve(root, targetSum,sum);
        return ans;

    }
};