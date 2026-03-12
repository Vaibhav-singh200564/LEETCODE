class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next) return head;  // empty or single node
        
        ListNode* temp = head;          // odd pointer
        ListNode* temp2 = head->next;   // even pointer
        ListNode* evenHead = temp2;     // store start of even list
        
        while (temp2 && temp2->next) {
            temp->next = temp2->next;   // link next odd
            temp = temp->next;          // move odd pointer
            
            temp2->next = temp->next;   // link next even
            temp2 = temp2->next;        // move even pointer
        }
        
        temp->next = evenHead;          // attach even list at the end
        return head;
    }
};