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
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* pre=NULL;
        ListNode* cur=slow;
        while(cur!=NULL){
            ListNode* nexttemp=cur->next;
            cur->next=pre;
            pre=cur;
            cur=nexttemp;
        }
        ListNode* right=head;
        ListNode* left=pre;
        while(left!=NULL){
            if(right->val!=left->val){
                return false;
            }
            right=right->next;
            left=left->next;
        }

        return true;
    }
};