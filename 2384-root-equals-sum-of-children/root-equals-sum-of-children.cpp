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
    bool checkTree(TreeNode* root) {
        int node_val = root->val;
        TreeNode* cur = root;
        while(root->left!=NULL){
            root=root->left;
        }
        int l=root->val;
        while(cur->right!=NULL){
            cur=cur->right;
        }
        int r=cur->val;

        cout<<l<<" "<<r<<endl;
        cout<<node_val<<endl;
        return node_val==(l+r);
    }
};