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
        if(head == NULL)
            return NULL;
        if(head->next == NULL){
            return NULL;
        }
        // count the no. of node in the list
        int count = 0;
        ListNode* temp = head;
        while(temp){
            temp =temp->next;
            count++;
            
        }
        // if you need to remove head
        if(n==count){
            head = head->next;
            return head;
        }
        // index of node to be reverse
        
        int i = 0;
        
        temp = head;
        
        while(i < count-n-1){
            i++;
            temp =temp->next;
        }
        if(temp->next->next!=NULL){
            temp->next = temp->next->next;
        }
        else{

            temp->next = NULL;
        }
        return head;
        
    }
};