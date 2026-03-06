/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head; // base case

        ListNode* newHead = reverseList(head->next); // reverse the rest
        head->next->next = head; // put current node at the end
        head->next = NULL;       // avoid cycle

        return newHead; // return new head of reversed list
    }
};