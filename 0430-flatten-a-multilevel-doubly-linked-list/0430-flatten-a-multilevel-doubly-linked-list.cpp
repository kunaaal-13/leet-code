/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* cur=head;
        while(cur!=NULL){
            if(cur->child!=NULL){
                Node* nex= cur->next;
                cur->next=flatten(cur->child);
                cur->next->prev=cur;
                cur->child=NULL;
                while(cur->next!=NULL){
                    cur=cur->next;
                }
                if(nex!=NULL){
                    cur->next=nex;
                    nex->prev=cur;
                }
            }
            cur=cur->next;
        }
        return head;
    }
};