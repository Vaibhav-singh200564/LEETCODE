class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        // Dummy node to simplify edge cases
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* prev = dummy;
        
        while (prev->next && prev->next->next) {
            ListNode* first = prev->next;
            ListNode* second = prev->next->next;
            
            // Swapping
            first->next = second->next;
            second->next = first;
            prev->next = second;
            
            // Move prev forward
            prev = first;
        }
        
        return dummy->next;
    }
};