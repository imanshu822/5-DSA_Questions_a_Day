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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int> s;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            s.insert(nums[i]);
        }

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* curr = head;
        ListNode* prev = dummy;
        while(curr){
            if(s.find(curr->val) != s.end()){
                ListNode* temp = curr;
                prev->next = curr->next;
                curr = curr->next;
                delete (temp);
            }else{
                curr = curr->next;
                prev = prev->next;
            }
        }
        return dummy->next;
    }
};