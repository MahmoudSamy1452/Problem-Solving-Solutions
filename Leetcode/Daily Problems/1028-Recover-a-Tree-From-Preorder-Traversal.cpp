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
    TreeNode* construct(string& traversal, int& i, int depth) {
        if(i == traversal.size()) return nullptr;
        int j = i;
        while(traversal[j] == '-') j++;
        if(j - i != depth) return nullptr;
        i = j; string num = "";
        while(i < traversal.size() && traversal[i] != '-') {
            num += traversal[i]; i++;
        }
        TreeNode* node = new TreeNode(stoi(num));
        node->left = construct(traversal, i, depth + 1);
        node->right = construct(traversal, i, depth + 1);
        return node;
    }
public:
    TreeNode* recoverFromPreorder(string traversal) {
        int i = 0;
        return construct(traversal, i, 0);
    }
};