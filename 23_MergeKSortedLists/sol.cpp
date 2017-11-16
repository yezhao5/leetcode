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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        //for each list, get min of all heads and merge the rest
        vector<ListNode*> list;
        ListNode * toRe;
        for (int i = 0; i< lists.size(); i++){
            if(lists[i]!=NULL) list.push_back(lists[i]);
        }
    
        ListNode * curr;
        
        while(list.size()!= 0){       
            //whose head is min
            int min = list[0]->val;
            int minhead = 0;
            for (int i = 1; i < list.size(); i++){
                if (list[i]->val < min) {
                    minhead = i;
                    min = list[i]->val;
                }
            }
            if (list[minhead]->next == NULL){
                list.erase (list.begin() + minhead);
            }else{
                list[minhead] = list[minhead]->next;
            }
            printf ("min is %d\n", min);
            ListNode add(min);
            if (toRe == NULL){
                toRe = & add;
                curr = & add;
            }
                 
            curr->next = &add;
            curr = curr -> next;
        }
        return toRe;
    }
};
