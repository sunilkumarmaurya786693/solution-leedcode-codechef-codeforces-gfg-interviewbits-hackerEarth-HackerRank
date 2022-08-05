class Solution {
public:
    bool pathSum(TreeNode* root, int targetSum, int sum){
        if(root==NULL)return false;
        if(root->val+sum==targetSum && root->left==NULL && root->right==NULL)return true;
        
        return pathSum(root->left, targetSum, sum+root->val) || pathSum(root->right, targetSum, sum+root->val);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return pathSum(root, targetSum, 0);
    }
};