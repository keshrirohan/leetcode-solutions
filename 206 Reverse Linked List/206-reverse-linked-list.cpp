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
    ListNode* reverse(ListNode* prev,ListNode* curr, ListNode* head){
        if(curr==NULL){
            return prev;
        }
        ListNode* forward = curr->next;
        curr->next=prev;
        prev = curr;
        return  reverse(prev,forward,head);
    
    }


public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* curr=head;
         return reverse(prev,curr,head);
       
    }
};