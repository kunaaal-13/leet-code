/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL){
            return NULL;
        }
        unordered_map <Node*,Node*> map;
        Node* newhead=new Node(head->val);
        Node* oldTemp= head->next;
        Node* newTemp= newhead;
        map[head]=newhead;
        while(oldTemp!=NULL){
            Node* copy=new Node(oldTemp->val);
            newTemp->next=copy;
            map[oldTemp]=copy;
            oldTemp=oldTemp->next;
            newTemp=newTemp->next;
        }
        oldTemp=head;
        newTemp=newhead;
        while(oldTemp!=NULL){
            newTemp->random= map[oldTemp->random];
            oldTemp=oldTemp->next;
            newTemp=newTemp->next;
        }
        return newhead;
        
    }
};