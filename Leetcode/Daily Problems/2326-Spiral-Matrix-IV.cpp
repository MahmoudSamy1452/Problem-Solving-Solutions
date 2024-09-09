/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    vector<vector<int>> directions = {
        {0, 1},
        {1, 0},
        {0, -1},
        {-1, 0},
    };
    bool inBound(int i, int j, int m, int n){
        return i >= 0 && j >= 0 && i < m && j < n;
    }
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans = vector<vector<int>>(m, vector<int>(n, -1));
        int i = 0, j = 0, d = 0;
        while(head) {
            ans[i][j] = head->val;
            head = head->next;
            if(!inBound(i + directions[d][0], j + directions[d][1], m, n) || ans[i + directions[d][0]][j + directions[d][1]] != -1)
                d = (d + 1) % 4;
            i += directions[d][0];
            j += directions[d][1];
        }
        return ans;
    }
};