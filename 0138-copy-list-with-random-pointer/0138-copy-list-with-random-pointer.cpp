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
        if(head == NULL) 
            return NULL;

        Node* curr = head;
        while(curr){
            Node* temp = new Node(curr->val);
            temp->next = curr->next;
            curr->next = temp;
            curr = temp->next;
        }
        curr = head;
        while(curr){
           if (curr->random) {
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }
        curr = head;
        Node* copyHead = head->next;
        while (curr) {
            Node* temp = curr->next;
            curr->next = temp->next;
            if (temp->next) {
                temp->next = temp->next->next;
            }
            curr = curr->next;
        }

        return copyHead;
    }
};