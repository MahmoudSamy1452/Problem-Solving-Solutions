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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *dummy = new ListNode(-101, head);
        ListNode *prev = dummy, *cur = head; int lastSeen = -101;
        while(cur) {
            if(cur->val == lastSeen || (cur->next && (cur->val == cur->next->val))) prev->next = cur->next;
            else prev = prev->next;
            lastSeen = cur->val;
            cur = cur->next;
        }
        return dummy->next;
    }
};