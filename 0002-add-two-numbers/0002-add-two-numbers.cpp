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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        ListNode* curr= ans;
        ListNode*prev = nullptr;
        int carry =0 ;
        while (l1!= nullptr && l2 != nullptr)
        {
            ListNode* newnode = new ListNode();
            curr -> val = (l1->val + l2->val + carry)%10;
            carry = (l1->val + l2->val + carry)/10;
            curr->next = newnode;
            prev=curr;
            curr = newnode;
            l1=l1->next;
            l2=l2->next;
        }
        while (l1!=nullptr)
        {
            ListNode* newnode = new ListNode();
            curr->val = (l1->val + carry)%10;
            carry = (l1->val + carry)/10;
            curr->next = newnode;
            prev=curr;
            curr=newnode;
            l1=l1->next;
        }
        while (l2!=nullptr)
        {
            ListNode* newnode = new ListNode();
            curr->val = (l2->val + carry)%10;
            carry = (l2->val + carry)/10;
            curr->next = newnode;
            prev=curr;
            curr=newnode;
            l2=l2->next;
        }
        curr->next = nullptr;
        if (carry != 0)
        {
            curr->val = carry;
        }
        else
        {
            prev->next = nullptr;
        }
        return ans;
    }
};