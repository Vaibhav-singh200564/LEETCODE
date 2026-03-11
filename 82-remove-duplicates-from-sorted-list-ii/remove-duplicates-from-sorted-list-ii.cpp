class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        unordered_map<int,int> mp;
        ListNode* temp = head;

        // Step 1: count frequency
        while(temp != NULL){
            mp[temp->val]++;
            temp = temp->next;
        }

        // create dummy pointer
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        temp = head;

        // Step 2: build new list
        while(temp != NULL){

            if(mp[temp->val] == 1){
                curr->next = temp;
                curr = curr->next;
            }

            temp = temp->next;
        }

        curr->next = NULL;

        return dummy->next;
    }
};