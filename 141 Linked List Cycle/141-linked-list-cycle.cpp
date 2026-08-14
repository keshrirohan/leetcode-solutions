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
        if(head==NULL || head->next==NULL){
            return false;
        }
        ListNode* low =head;
        ListNode* high=head->next;
        while(low!=high  ){

            low=low->next;
            if( high->next==NULL || high->next->next==NULL) return false;
            high=high->next->next;

        }
        return true;


        
    }
};