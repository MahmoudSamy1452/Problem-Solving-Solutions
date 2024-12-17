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
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int first = 0, last = -1e5, cnt = 1; ListNode* it = head->next, *prev = head;
        vector<int> ans(2, -1);
        while(it->next) {
            if((prev->val < it->val && it->next->val < it->val) || (prev->val > it->val && it->next->val > it->val)) {
                if(ans[0] == -1 && first)
                    ans[0] = cnt - last;
                else
                    ans[0] = min(cnt - last, ans[0]);
                if(!first) first = cnt;
                last = cnt;
            }
            cnt++; it = it->next; prev = prev->next;
        }
        if(first && last != first)
            ans[1] = last - first;
        return ans;
    }
};