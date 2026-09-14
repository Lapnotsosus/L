class Solution {
public:
    ListNode* partition(ListNode* head, int k) {
        ListNode* curr = head;

        vector<int> nums;

        while (curr != nullptr) {
            nums.push_back(curr->val);
            curr = curr->next;
        }

        ListNode* list2 = new ListNode(0);
        ListNode* ans = list2;

        for (int x : nums) {
            if (x < k) {
                ListNode* newnode = new ListNode(x);
                list2->next = newnode;
                list2 = list2->next;
            }
        }

        for (int x : nums) {
            if (x >= k) {
                ListNode* newnode = new ListNode(x);
                list2->next = newnode;
                list2 = list2->next;
            }
        }

        return ans->next;
    }
};