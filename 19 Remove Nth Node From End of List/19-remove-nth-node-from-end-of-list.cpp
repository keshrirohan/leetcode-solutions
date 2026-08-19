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
    int size(ListNode* temp){
        int len=0;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        return len;
    }

    ListNode* removehead(ListNode* head){
        ListNode* temp=head;
       head=head->next;
        delete(temp);
      
        return head;
    }


public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        ListNode* prev=NULL;
        // if(head==NULL || head->next==NULL){
        //     return NULL;
        // }
        int term = size(temp)-n;
        
        cout<<term;

        if(term==0){
          return removehead(head);
        }
            
        for(int i=0;i<term;i++){
            prev=temp;
            temp=temp->next;
        }

        prev->next=temp->next;
        delete(temp);

        
        return head;


    }
};