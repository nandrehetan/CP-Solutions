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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root) return ans;

        map<int, vector<pair<int, int>>> nodes;
        queue<pair<TreeNode*, pair<int, int>>> q;
        q.push({root, {0, 0}});

        while (!q.empty()) {
            auto p = q.front();
            q.pop();
            auto node = p.first;
            int x = p.second.first;
            int y = p.second.second;
            nodes[x].push_back({y, node->val});

            if (node->left) {
                q.push({node->left, {x - 1, y + 1}});
            }
            if (node->right) {
                q.push({node->right, {x + 1, y + 1}});
            }
        }

        for (auto& j : nodes) {
            auto& p = j.second;
            sort(p.begin(), p.end());
            vector<int> column;
            for (auto& node : p) {
                column.push_back(node.second);
            }
            ans.push_back(column);
        }

        return ans;
    }
};
