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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode* curr = head;
        ListNode* prev1=dummy;
        for (int i =1 ; i<left ; i++)
        {
            prev1=curr;
            curr=curr->next;
        }
        ListNode* two = curr;
        ListNode* prev=two;
        curr=curr->next;
        for(int i=0 ; i<right-left ; i++)
        {
            ListNode* nxt = curr->next;
            nxt = curr->next;
            curr->next = prev;
            prev=curr;
            curr=nxt;
        }
        prev1->next = prev;
        two->next = curr;
        return dummy-> next;
    }
};