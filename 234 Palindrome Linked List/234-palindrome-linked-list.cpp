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
    vector<int> convertToArray(ListNode* head) {
        vector<int> pd;

        while (head != NULL) {
            pd.push_back(head->val);
            head = head->next;
        }

        return pd;
    }

public:
    bool isPalindrome(ListNode* head) {
        vector<int> pd = convertToArray(head);
        int n = pd.size();
        int i = 0, j = n - 1;
        while (i < j) {
            if (pd[i] == pd[j]) {
                i++;
                j--;
            }else{
                return false;
            }
        }
        return true;
    }
};