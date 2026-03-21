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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int cnt=1;
        ListNode* ans=head;
        while(temp!=NULL){
            temp=temp->next;
            if(cnt%2==0){
                ans=ans->next;
                
            }
            cnt++;
        }
        return ans;
    }
};