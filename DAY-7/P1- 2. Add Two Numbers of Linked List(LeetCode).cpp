// Problem Link: https://leetcode.com/problems/add-two-numbers/description/
// Problem Name: P1- 2. Add Two Numbers of Linked List(LeetCode)
// Solution: accepted submission

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode();
        ListNode* temp=dummy;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry){
            int sum=0;
            if(l1 != NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            sum+=carry;
            carry=sum/10;
            ListNode* newnode=new ListNode(sum%10);
            temp->next=newnode;
            temp=temp->next;
        }
        return dummy->next;
    }
};


---------------------------------------------------------------------------------------------
// wrong submission

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
    ListNode* reverseLL(ListNode* head){
        ListNode *curr = head;
        ListNode *prev = NULL;
        ListNode *next = head;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int n1 = 0, n2 = 0, i = 0;
        ListNode *rl1 = reverseLL(l1);
        ListNode *rl2 = reverseLL(l2); 
        while(rl1){
            n1 += ((rl1->val) *pow(10,i));
            i++;
            rl1 = rl1->next;
        }
        i = 0;
        while(rl2){
            n2 += ((rl2->val)*pow(10,i));
            i++;
            rl2 = rl2->next;
        }
        int n3 = n1 + n2;
        cout << n3 << endl;
        int digit = n3 % 10;
        n3 = n3/10;
        ListNode *temp = new ListNode;
        temp->val = digit;
        temp->next = NULL;
        ListNode *last = temp;
        while(n3 != 0){
            digit = n3 % 10;
            n3 = n3/10;
            ListNode *temp1 = new ListNode;
            temp1->val = digit;
            last->next = temp1;
            last = temp1;
        }

        return temp;
    }   
};
