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
class FindElements {
    unordered_set<int> exist;
public:
    FindElements(TreeNode* root) {
        queue<TreeNode*> q; root->val = 0;
        q.push(root);
        while(!q.empty()) {
            TreeNode* cur = q.front();
            q.pop();
            exist.insert(cur->val);
            if(cur->left != nullptr) {
                cur->left->val = 2*cur->val + 1;
                q.push(cur->left);
            }
            if(cur->right != nullptr) {
                cur->right->val = 2*cur->val + 2;
                q.push(cur->right);
            }
        }
    }
    
    bool find(int target) {
        return exist.find(target) != exist.end();
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */