class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* lo = new ListNode(100);  // dummy node for < x
        ListNode* hi = new ListNode(200);  // dummy node for >= x
        ListNode* tempLo = lo;
        ListNode* tempHi = hi;
        ListNode* temp = head;

        while (temp != NULL) {
            if (temp->val < x) {
                tempLo->next = temp;
                tempLo = tempLo->next;
            } else {
                tempHi->next = temp;
                tempHi = tempHi->next;
            }
            temp = temp->next;
        }

        tempHi->next = NULL;         // important to avoid cycle
        tempLo->next = hi->next;     // join both lists

        return lo->next;
    }
};
