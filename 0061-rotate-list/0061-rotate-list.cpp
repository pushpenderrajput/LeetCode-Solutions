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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || k == 0) return head;
        ListNode* tail = head;
        int length = 1;
        while(tail->next){
            tail = tail->next;
            length++;
        }
        k = k % length;
        if (k == 0) return head;
        ListNode* temp = head;
        int count = length-k;
        while(--count>0){
            temp = temp->next;
           

        }
        tail->next = head;
        head = temp->next;
        temp->next = nullptr;
        return head;

       
        
        
    }
};