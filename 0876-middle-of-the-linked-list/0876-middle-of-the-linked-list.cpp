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
        ListNode* ans=head;
        int i=0;
        while(temp!=NULL){
            temp=temp->next;
            i++;
        }
        int f=(i/2)+1;
        for(int j=1;j<f;j++){
            ans=ans->next;
        }

        return ans;
    }
};