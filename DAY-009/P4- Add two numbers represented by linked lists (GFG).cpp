// Problem Link: https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/0
// Problem Name: Add two numbers represented by linked lists (GFG)
// Solution: accepted submmission



/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node *prev = NULL;
        Node *curr = head;
        Node *next = head;
        while(curr != NULL){
            next = next->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }   
    void insertAtTail(struct Node * &head, struct Node * &tail , int val){
        Node *temp = new Node(val);
        if(head == NULL)
        {
            head = temp;
            tail = temp;
            return;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
    }
    Node * add(struct Node *first, struct Node * second){
        int carry = 0;
        Node * ansHead = NULL;
        Node * ansTail = NULL;
        
        while(first != NULL && second != NULL){
            int sum = carry + first->data + second->data;
            
            int digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum/10;
            first = first->next;
            second = second->next;
        }
        while(first != NULL){
            int sum = carry + first->data;
            int digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum/10;
            first = first->next;
            
        }
        while(second != NULL){
            int sum = carry + second->data;
            int digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum/10;
            second = second->next;
        }
        while(carry != 0){
            int sum = carry;
             int digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum/10;
        }
        return ansHead;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {

        first = reverseList(first);
        second = reverseList(second);
    
        Node *ans = add(first, second);
        
        ans = reverseList(ans);
        return ans;
    }
};
