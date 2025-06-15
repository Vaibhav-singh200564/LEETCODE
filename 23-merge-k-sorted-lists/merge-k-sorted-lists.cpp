class Solution {
public:
    ListNode* merge(ListNode* list1, ListNode* list2) {
        ListNode* tempA = list1;
        ListNode* tempB = list2;
        ListNode* c = new ListNode(100);  // dummy node
        ListNode* tempC = c;

        while (tempA != NULL && tempB != NULL) {
            if (tempA->val <= tempB->val) {
                tempC->next = tempA;  // ✅ reuse node instead of creating new
                tempC = tempA;
                tempA = tempA->next;
            } else {
                tempC->next = tempB;  // ✅ reuse node instead of creating new
                tempC = tempB;
                tempB = tempB->next;
            }
        }

        if (tempA == NULL) {
            tempC->next = tempB;
        } else {
            tempC->next = tempA;
        }

        return c->next;
    }

    ListNode* mergeKLists(vector<ListNode*>& arr) {
        if (arr.size() == 0) return NULL;
        while (arr.size() > 1) {
            ListNode* a = arr[0];
            arr.erase(arr.begin());
            ListNode* b = arr[0];
            arr.erase(arr.begin());
            ListNode* c = merge(a, b);
            arr.push_back(c);
        }
        return arr[0];
    }
};
