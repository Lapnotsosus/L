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
    ListNode* middleNode(ListNode* head) {
        ListNode* curr = head;
        int length=0;
        ListNode* mid = nullptr;
        while (curr != nullptr)
        {
            length++;
            curr = curr->next;
        }
        curr = head;
        int index=0;
            while(curr != nullptr)
            {
                if (index >= length/2)
                return curr;
                curr = curr->next;
                index++;
            }
        return nullptr;
    }
};