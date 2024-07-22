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
    bool hasCycle(ListNode *head) {
        if (head == NULL || head->next == NULL){
            return false;
        }
        ListNode *i = head;
        ListNode *j = head->next;
        while(i != j){
            if(j == NULL|| j->next == NULL){
                return false;
            }
            i = i->next;
            j = j->next->next;
        }
        return true;

         
        
    }
};