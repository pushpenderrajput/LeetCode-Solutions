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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int L = 0;
        while(temp != NULL){
            L++;
            temp = temp->next;
        }
        if(L==n){
            ListNode* newHead = head->next;
            delete(head);
            return newHead;
        }
        int res = L-n;
        temp = head;
        while(temp != NULL){
            res--;
            if(res == 0){
                break;
            }
            temp = temp->next;
        }
        ListNode* delNode = temp->next;
        temp->next = temp->next->next;
        delete(delNode);
        
        return head;
        
        
    }
};