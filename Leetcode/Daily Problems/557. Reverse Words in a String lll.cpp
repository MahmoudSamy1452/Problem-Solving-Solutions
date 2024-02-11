// 557. Reverse Words in a String III
// Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

// Example 1:

// Input: s = "Let's take LeetCode contest"
// Output: "s'teL ekat edoCteeL tsetnoc"
// Example 2:

// Input: s = "God Ding"
// Output: "doG gniD"

// Constraints:

// 1 <= s.length <= 5 * 104
// s contains printable ASCII characters.
// s does not contain any leading or trailing spaces.
// There is at least one word in s.
// All the words in s are separated by a single space.

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
    string reverseWords(string s) {
        string ans = "";
        stack<char> st;
        for(char x : s){
            if(x != ' ' && x != '\n'){
                st.push(x);
            } else {
                while(!st.empty()){
                    ans += st.top();
                    st.pop();
                }
                ans += x;
            }
        }
        while(!st.empty()){
                    ans += st.top();
                    st.pop();
                }
        return ans;
    }
};