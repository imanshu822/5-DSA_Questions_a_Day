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
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*, int> umap;
        for(auto p = head; p != NULL; p = p->next){
            if(umap.find(p) != umap.end())
                return p;
            umap[p] = p->val;
        }
        return NULL;
    }
};