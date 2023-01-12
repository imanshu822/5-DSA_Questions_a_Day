// Problem Link: https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/0
// Problem Name: Check if Linked List is Palindrome (GFG)
// Solution: accepted submmission




/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
    private:
    Node *getMid(Node *head){
        Node *slow = head;
        Node *fast = head->next;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    Node *reverseLL ( Node *head){
        Node *prev = NULL;
        Node *curr = head;
        Node *next = head;
        while(curr){
            next = next->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        Node *middle = getMid(head);
        
        Node * temp = reverseLL(middle->next);
        middle->next = temp;
        
        Node *h1 = head;
        Node *h2 = temp;
        while(h2 != NULL){
            if(h1->data != h2->data)
                return false;
            h1 = h1->next;
            h2 = h2->next;
        }
        temp = reverseLL(middle->next);
        middle->next = temp;
        return true;
    }
};
