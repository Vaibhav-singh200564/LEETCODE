class Solution {
public:
    ListNode* getNodeAt(ListNode* head,int idx){
        ListNode* temp=head;
        for(int i=0; i<idx; i++){   // FIXED (<= → <)
            temp=temp->next;
        }
        return temp;
    }

    ListNode* reverseList(ListNode* head) {
        ListNode* temp=head;
        int n=0;
        while(temp!=NULL){
            temp=temp->next;
            n++;
        }

        int i=0;
        int j=n-1;

        while(i<j){
            ListNode* left=getNodeAt(head, i);
            ListNode* right=getNodeAt(head, j);

            int t=left->val;
            left->val=right->val;
            right->val=t;

            i++;
            j--;
        }
        return head;
    }
};