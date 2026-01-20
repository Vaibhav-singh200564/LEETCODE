class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> toRemove(nums.begin(), nums.end()); // for fast lookup

        // Remove all nodes at the head that need to be removed
        while(head != nullptr && toRemove.count(head->val)) {
            head = head->next;
        }

        ListNode* temp = head;
        while(temp != nullptr && temp->next != nullptr) {
            if(toRemove.count(temp->next->val)) {
                temp->next = temp->next->next; // skip node
            } else {
                temp = temp->next;
            }
        }

        return head;
    }
};
