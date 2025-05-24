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
    int ans = INT_MIN;
    int dfs(TreeNode* root) {
        if(!root) return 0;
        int optimalLeftPathSum = dfs(root->left), optimalRightPathSum = dfs(root->right);
        int sum = 0;
        if(optimalLeftPathSum > 0) sum += optimalLeftPathSum;
        if(optimalRightPathSum > 0) sum += optimalRightPathSum;
        sum += root->val;
        ans = max(ans, sum);
        return max({optimalLeftPathSum, optimalRightPathSum, 0}) + root->val;
    }
public:
    int maxPathSum(TreeNode* root) {
        dfs(root);
        return ans;
    }
};