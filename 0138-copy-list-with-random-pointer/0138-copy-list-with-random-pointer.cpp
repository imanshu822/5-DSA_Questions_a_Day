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
        unordered_map<Node*, Node*> mp;
        Node* curr = head;

        while(curr){
            Node* temp = new Node(curr->val);
            mp[curr] = temp;
            curr = curr->next;
        }

        curr = head;
        Node* copyNode = new Node(0);
        copyNode->next = NULL;
        while(curr){
            Node* copyNode = mp[curr];
            copyNode->next = mp[curr->next];
            copyNode->random = mp[curr->random];
            curr = curr->next;
        }
        return mp[head];
    }
};