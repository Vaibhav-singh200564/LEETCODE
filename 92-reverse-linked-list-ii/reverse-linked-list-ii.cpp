class Solution {
public:
    ListNode* reverse(ListNode* head) {
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

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left == right) return head;

        ListNode* a = NULL;
        ListNode* b = NULL;
        ListNode* c = NULL;
        ListNode* d = NULL;
        int n = 1;

        ListNode* temp = head; // FIXED: Changed 'Node*' to 'ListNode*'
        while (temp) {
            if (n == left - 1) a = temp;
            if (n == left) b = temp;
            if (n == right) c = temp;
            if (n == right + 1) d = temp;
            temp = temp->next;
            n++;
        }

        if (a != NULL) a->next = NULL;
        c->next = NULL;

        c = reverse(b);

        if (a) a->next = c;
        b->next = d;

        if (left == 1) return c;
        return head;
    }
};
