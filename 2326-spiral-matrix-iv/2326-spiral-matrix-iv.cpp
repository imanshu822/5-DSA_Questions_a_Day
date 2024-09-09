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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> matrix(m, vector<int>(n, -1));  // Initialize matrix with -1
        
        int top = 0, bottom = m - 1, left = 0, right = n - 1;
        ListNode* current = head;
        
        while (current) {
            // Fill top row
            for (int i = left; i <= right && current; i++) {
                matrix[top][i] = current->val;
                current = current->next;
            }
            top++;
            
            // Fill right column
            for (int i = top; i <= bottom && current; i++) {
                matrix[i][right] = current->val;
                current = current->next;
            }
            right--;
            
            // Fill bottom row
            for (int i = right; i >= left && current; i--) {
                matrix[bottom][i] = current->val;
                current = current->next;
            }
            bottom--;
            
            // Fill left column
            for (int i = bottom; i >= top && current; i--) {
                matrix[i][left] = current->val;
                current = current->next;
            }
            left++;
        }
        
        return matrix;
    }
};