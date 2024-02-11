// 98. Validate Binary Search Tree

// Given the root of a binary tree, determine if it is a valid binary search tree (BST).

// A valid BST is defined as follows:

// The left subtree of a node contains only nodes with keys less than the node's key.
// The right subtree of a node contains only nodes with keys greater than the node's key.
// Both the left and right subtrees must also be binary search trees.

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

class Solution
{
public:
  bool inRange(TreeNode *root, long long min, long long max)
  {
    if (root == nullptr)
      return true;
    if (root->val > min && root->val < max)
      return inRange(root->left, min, root->val) && inRange(root->right, root->val, max);

    return false;
  }

  bool isValidBST(TreeNode *root)
  {
    return inRange(root, LONG_LONG_MIN, LONG_LONG_MAX);
  }
};