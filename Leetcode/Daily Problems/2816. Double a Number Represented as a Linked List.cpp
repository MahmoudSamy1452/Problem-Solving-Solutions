// 2816. Double a Number Represented as a Linked List

// You are given the head of a non-empty linked list representing a non-negative integer without leading zeroes.

// Return the head of the linked list after doubling it.

// Example 1:

// Input: head = [1,8,9]
// Output: [3,7,8]
// Explanation: The figure above corresponds to the given linked list which represents the number 189. Hence, the returned linked list represents the number 189 * 2 = 378.
// Example 2:

// Input: head = [9,9,9]
// Output: [1,9,9,8]
// Explanation: The figure above corresponds to the given linked list which represents the number 999. Hence, the returned linked list reprersents the number 999 * 2 = 1998.

// Constraints:

// The number of nodes in the list is in the range [1, 1e4]
// 0 <= Node.val <= 9
// The input is generated such that the list represents a number that does not have leading zeros, except the number 0 itself.

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
class Solution
{

  int rec(ListNode *head)
  {
    if (!head)
      return 0;
    int carry = rec(head->next);
    int doubled = 2 * head->val + carry;
    head->val = doubled % 10;
    return doubled / 10;
  }

public:
  ListNode *doubleIt(ListNode *head)
  {
    int carry = rec(head);
    ListNode *newHead = head;
    if (carry)
    {
      newHead = new ListNode(carry, head);
    }
    return newHead;
  }
};