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
    TreeNode* build(const vector<int>& preorder, const vector<int>& inorder, int &i, int j, int k) {
        if(j == k) return nullptr;
        TreeNode* root = new TreeNode(preorder[i]);
        auto it = find(inorder.begin() + j, inorder.begin() + k, preorder[i]);
        if(it != inorder.begin() + k) i++;
        root->left = build(preorder, inorder, i, j, it-inorder.begin());
        root->right = build(preorder, inorder, i, it-inorder.begin() + 1, k);
        return root;
    }
public:
    TreeNode* buildTree(const vector<int>& preorder, const vector<int>& inorder) {
        int i = 0, j = 0, k = inorder.size();
        return build(preorder, inorder, i, j, k);
    }
};