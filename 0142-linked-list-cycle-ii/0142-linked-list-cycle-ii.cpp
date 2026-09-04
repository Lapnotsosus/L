/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*>seen;
        ListNode* curr = head;
        ListNode* ans=NULL;
        while (curr != nullptr)
        {
            if (seen.count(curr))
            {
                ans=curr;
                break;
            }
            seen.insert(curr);
            curr = curr->next;
        }
        return ans;
    }
};