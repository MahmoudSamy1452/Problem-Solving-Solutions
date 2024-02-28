// 513. Find Bottom Left Tree Value

// Given the root of a binary tree, return the leftmost value in the last row of the tree.

// Example 1:

// Input: root = [2,1,3]
// Output: 1
// Example 2:

// Input: root = [1,2,3,4,null,5,6,null,null,7]
// Output: 7

// Constraints:

// The number of nodes in the tree is in the range [1, 104].
// -2e31 <= Node.val <= 2e31 - 1

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
  int findBottomLeftValue(TreeNode *root)
  {
    queue<TreeNode *> q;
    q.push(root);
    int size, ans;
    while (!q.empty())
    {
      size = q.size();
      while (size--)
      {
        TreeNode *p = q.front();
        q.pop();
        ans = p->val;
        if (p->right)
          q.push(p->right);
        if (p->left)
          q.push(p->left);
      }
    }
    return ans;
  }
};