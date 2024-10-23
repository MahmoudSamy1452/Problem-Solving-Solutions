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
    void updateValues(TreeNode* root, vector<long long>& v, int i) {
        if(i + 1 >= v.size() || !root) return;
        if(i == 0) root->val = 0;
        int total_children = 0;
        if(root->left) total_children += root->left->val;
        if(root->right) total_children += root->right->val;
        if(root->left) root->left->val = v[i + 1] - total_children;
        if(root->right) root->right->val = v[i + 1] - total_children;
        updateValues(root->left, v, i + 1);
        updateValues(root->right, v, i + 1);
    }

public:
    TreeNode* replaceValueInTree(TreeNode* root) {
        queue<TreeNode*> q; vector<long long> v;
        q.push(root);
        while(q.size()) {
            long long size = q.size(), sum = 0;
            while(size--) {
                TreeNode* node = q.front(); q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                sum += node->val;
            }
            v.push_back(sum);
        }

        updateValues(root, v, 0);

        return root;
    }
};