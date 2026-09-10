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
    int getDecimalValue(ListNode* head) {
        ListNode* pre=NULL;
        ListNode* cur=head;
        ListNode* nex=NULL;
        while(cur!=NULL){
            nex=cur->next;
            cur->next=pre;
            pre=cur;
            cur=nex;
        }
        int ans=0;
        int pow=1;
        ListNode* temp=pre;
        while(temp!=NULL){
            ans+=(temp->val)*pow;
            pow*=2;
            temp=temp->next;
        }
        return ans;

    }
};