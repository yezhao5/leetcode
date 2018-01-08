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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        if (l1 == 0 && l2 == 0)  return 0;
        if (l1 == 0) return l2;
        if (l2 == 0) return l1;
        vector<int> to;
        while (l1 || l2){
            if (!l1){
                to.push_back(l2->val);
                l2 = l2->next;
            }else if (!l2){
                to.push_back(l1->val);
                l1 = l1->next;
            }else{
                int add = l1->val + l2->val;

                int addd = add % 10 + carry;
                carry = add /10;
                to.push_back(addd);
                l1 = l1->next;
                l2 = l2->next;
            }
            cout << "got" << to.back() << endl;
        }
        ListNode tor = {to[0]};
        cout << tor.val<<endl;
        return &tor;
        ListNode it = tor;

        for (int a = 1; a<to.size(); a++){
            cout<< to[a]<<endl;
            ListNode ne = {to[a]};
            it.next = &ne;
            it = ne;

        }
        return &tor;
    }
};
