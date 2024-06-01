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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> store;
        ListNode* curr = list1;
        
        while(curr != nullptr) {
            store.push_back(curr->val);
            curr = curr->next;
        }
        
        curr = list2;
        while(curr != nullptr) {
            store.push_back(curr->val);
            curr = curr->next;
        }
        
        sort(store.begin(), store.end());
        if(store.empty()) return nullptr; 
        
        ListNode* head = new ListNode(store[0]);
        ListNode* last = head;
        
        for(int i = 1; i < store.size(); i++) {
            ListNode* temp = new ListNode(store[i]);
            last->next = temp;
            last = temp;
        }
        return head;
    }
};
