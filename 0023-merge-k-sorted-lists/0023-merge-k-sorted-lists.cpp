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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* ans = new ListNode();
        ListNode* head = ans;
        priority_queue<int , vector<int> , greater<int>>pq;
        for (int i = 0 ; i<lists.size() ; i++)
        {
            ListNode* curr = lists[i];
            while (curr != nullptr)
            {
                pq.push(curr->val);
                curr = curr -> next;
            }
        }
        if (pq.empty()) return nullptr;
        while (!pq.empty())
        {
            ans->val = pq.top();
            pq.pop();
            if (pq.empty()) break;
            ListNode* curr = new ListNode;
            ans->next = curr;
            ans=ans->next;
        }
        return head;
    }
};