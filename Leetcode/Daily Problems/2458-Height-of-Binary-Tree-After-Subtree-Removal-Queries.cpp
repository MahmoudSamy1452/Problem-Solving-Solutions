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
    int preprocessing(TreeNode* root, int level, vector<int>& lvl, vector<int>& h, vector<pair<int, int>>&  top2_h) {
        if(!root) return 0;
        int x = preprocessing(root->left, level + 1, lvl, h, top2_h);
        int y = preprocessing(root->right, level + 1, lvl, h, top2_h);
        int height = max(x, y) + 1;

        lvl[root->val] = level;
        h[root->val] = height;
        if(height > top2_h[level].first){
            top2_h[level].second = top2_h[level].first;
            top2_h[level].first = height;
        } else {
            top2_h[level].second = max(top2_h[level].second, height);
        }

        return height;
    }
public:
    vector<int> treeQueries(TreeNode* root, vector<int>& queries) {
        int n = 100001;
        vector<int> lvl(n), h(n);
        vector<pair<int,int>> top2_h (n, {0, 0});

        preprocessing(root, 0, lvl, h, top2_h);

        vector<int> ans;
        for(int query: queries) {
            int max_height = top2_h[lvl[query]].first == h[query] 
                                ? top2_h[lvl[query]].second
                                : top2_h[lvl[query]].first;
            ans.push_back(max_height + lvl[query] - 1);
        }
        return ans;
    }
};