class Solution {
public:
    bool solve(TreeNode* root, int target, int curr) {
        if (root != NULL) {
            curr += root->val;  

            if (root->left == NULL && root->right == NULL) {
                if (curr == target) return true;
            }

            bool leftResult = solve(root->left, target, curr);
            bool rightResult = solve(root->right, target, curr);

            curr -= root->val;

            return leftResult || rightResult;
        }

        return false;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        return solve(root, targetSum, 0);
    }
};
