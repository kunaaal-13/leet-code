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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA=headA;
        ListNode* tempB=headB;
        int i=0;int j=0;
        while(tempA!=NULL){
            i++;
            tempA=tempA->next;
        }
        while(tempB!=NULL){
            j++;
            tempB=tempB->next;
        }
        tempA=headA;
        tempB=headB;
        if(i>j){
            for(int k=0;k<(i-j);k++){
                tempA=tempA->next;
            }
        }else{
            for(int k=0;k<(j-i);k++){
                tempB=tempB->next;
            }
        }
        while(tempA!=NULL){
            if(tempA==tempB){
                return tempA;
            }
            tempA=tempA->next;
            tempB=tempB->next;
        }


        return NULL;
    }
};