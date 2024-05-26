class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int low = 0, high = row - 1;
        int targetRow = -1;

        // Correct binary search to find the correct row
        while (low <= high) {
            int mid = (low + high) / 2;
            if (target >= matrix[mid][0] && target <= matrix[mid][col - 1]) {
                targetRow = mid;
                break;
            } else if (target < matrix[mid][0]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        // If the target row was not found, return false
        if (targetRow == -1) return false;

        // Reset boundaries for column search
        int left = 0, right = col - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (matrix[targetRow][mid] == target) {
                return true;
            } else if (matrix[targetRow][mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return false;
    }
};
