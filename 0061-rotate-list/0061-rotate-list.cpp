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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr)
        return head;
        ListNode* curr = head;
        int size=0;
        while (curr != nullptr)
        {
            size++;
            curr = curr->next;
        }
        curr=head;
        int i=0;
        k%=size;
        if (k==0) return head;
        int pivot = (size-(k%size));
        ListNode* newhead;
        while (curr!=nullptr)
        {
            i++;
            if (i==pivot)
            {
                newhead = curr->next;
                curr->next = nullptr;
                curr = newhead;
            }
            if (curr->next == nullptr)
            {
                curr->next = head;
                break;
            }
            else
            curr = curr->next;
        }
        return newhead;
    }
};