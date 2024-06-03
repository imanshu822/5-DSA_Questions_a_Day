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
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*, int> mpp;
        for(auto p = head; p != NULL; p = p->next){
            if(mpp.find(p) != mpp.end()){
                return true;
            }
            mpp[p] = p->val;
        }
        return false;
    }
};