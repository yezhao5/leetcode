/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* right = head;
        ListNode* left = head;
        int i;
        for(i=0; i<n && right && right->next; i++){
            right = right-> next;
        }
        if (i != n) return head->next;
        if (left == right) return 0;
        while(right->next){
            right = right->next;
            left = left-> next;
        }
        left->next = left->next->next;

        return head;
    }
};
