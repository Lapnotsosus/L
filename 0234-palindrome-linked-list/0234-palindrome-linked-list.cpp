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
    bool isPalindrome(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* newnode = new ListNode(curr->val);
        while (curr != nullptr)
        {
            newnode = new ListNode(curr->val);
            newnode->next = prev;
            prev=newnode;
            curr = curr->next;
        }
        while (newnode != nullptr && head != nullptr)
        {
            if (newnode->val != head->val)
            return false;
            newnode = newnode->next;
            head = head->next;
        }
        return true;
    }
};