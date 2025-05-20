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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(root == nullptr) return {};
        if(root->left == nullptr && root->right == nullptr && targetSum == root->val) return {{root->val}};
        vector<vector<int>> ans;
        for(auto& path: pathSum(root->left, targetSum - root->val)) {
            path.insert(path.begin(), root->val);
            ans.push_back(path);
        }
        for(auto& path: pathSum(root->right, targetSum - root->val)) {
            path.insert(path.begin(), root->val);
            ans.push_back(path);
        }
        return ans;
    }
};