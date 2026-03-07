class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        ListNode* temp = head;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }

        int m = len - n - 1;

        if(n==len){
            head=head->next;
            return head;
        }

        ListNode* temp1 = head;
        for(int i = 0; i < m; i++){
            temp1 = temp1->next;
        }

        temp1->next = temp1->next->next;
        return head;
    }
};