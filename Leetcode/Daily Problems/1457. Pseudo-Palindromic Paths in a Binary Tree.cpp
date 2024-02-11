// 1457. Pseudo-Palindromic Paths in a Binary Tree

// Given a binary tree where node values are digits from 1 to 9. A path in the binary tree is said to be pseudo-palindromic if at least one permutation of the node values in the path is a palindrome.

// Return the number of pseudo-palindromic paths going from the root node to leaf nodes.

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
private:
    int dfs(TreeNode* root, int parity){
        if(!root) return 0;
        parity ^= (1 << root->val);
        if(!root->left && !root->right){
            return !(parity & (parity-1));
        }
        int ans = dfs(root->left, parity) + dfs(root->right, parity);
        parity ^= (1 << root->val);
        return ans;
    }

public:

    int pseudoPalindromicPaths (TreeNode* root) {
        int parity = 0;
        return dfs(root, parity);
    }
};