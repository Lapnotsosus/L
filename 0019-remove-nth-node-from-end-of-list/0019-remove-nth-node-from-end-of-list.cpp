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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        int size=0;
        while (curr != nullptr)
        {
            size++;
            curr = curr->next;
        }
        int index=size-n;
        if (index == 0)
        return head->next;
        curr=head;
        int i=0;
        while (i<=index)
        {
            if(i==index-1)
            {
                curr->next = curr->next->next;
                break;
            }
            curr = curr->next;
            i++;
        }
        return head;
    }
};