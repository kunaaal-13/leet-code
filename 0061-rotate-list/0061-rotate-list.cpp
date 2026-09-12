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
        if( head==NULL || head->next==NULL || k==0){
            return head;
        }
        ListNode* tail=head;
        int size=1;
        while(tail->next!=NULL){
            tail=tail->next;
            size++;
        }
        tail->next=head;
        k=k%size;
        int cut=size-k;
        while(cut>0){
            tail=tail->next;
            cut--;
        }
        head=tail->next;
        tail->next=NULL;
        return head;

    }
};