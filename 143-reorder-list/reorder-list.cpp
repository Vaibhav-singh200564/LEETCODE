class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = head;
        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* b = reverseList(slow->next); // ✅ Corrected: reverse → reverseList
        ListNode* a = head;
        slow->next = NULL;

        ListNode* c = new ListNode(100); // ✅ Corrected: Node → ListNode
        ListNode* tempC = c;
        ListNode* tempA = head;
        ListNode* tempB = b; // ✅ Missing semicolon fixed

        while (tempA && tempB) {
            tempC->next = tempA; // ✅ Fixed: '==' → '='
            tempA = tempA->next;
            tempC = tempC->next;

            tempC->next = tempB;
            tempB = tempB->next;
            tempC = tempC->next;
        }
        tempC->next = tempA;
        head = c->next;
    }
};
