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
    int numComponents(ListNode* head, vector<int>& nums) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        int ans =0;
        set<int>s;
        for (int x : nums)
        s.insert(x);
        while (curr != nullptr)
        {
            if (s.count(curr->val))
            if (curr == head || !s.count(prev->val))
            ans++;
            prev = curr;
            curr = curr->next;
        }
        return ans;
    }
};