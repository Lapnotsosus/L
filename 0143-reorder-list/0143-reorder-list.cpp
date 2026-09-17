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
    void reorderList(ListNode* head) {
        ListNode* slow =head;
        ListNode* fast = head;
        while (fast->next != nullptr && fast->next->next != nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* curr1 = head;
        ListNode* curr2 = slow->next;
        slow->next = nullptr;
        ListNode* head2 = curr2;
        ListNode* prev = nullptr;
        while (head2 != nullptr)
        {
            ListNode* nxt = head2->next;
            head2->next = prev;
            prev = head2;
            head2 = nxt;
        }
        curr2 = prev;
        while (curr1 != nullptr && curr2 != nullptr)
        {
            ListNode* nxt1 = curr1->next;
            ListNode* nxt2 = curr2->next;
            curr1->next = curr2;
            curr2->next = nxt1;
            curr1 = nxt1;
            curr2=nxt2;
        }
    }
};