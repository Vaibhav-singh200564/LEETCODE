class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int len = 0;
        ListNode* temp = head;

        // count length
        while (temp) {
            len++;
            temp = temp->next;
        }

        int mid = len / 2;   // how many steps to move

        // move mid steps
        temp = head;
        for (int i = 0; i < mid; i++) {
            temp = temp->next;
        }

        return temp;
    }
};
