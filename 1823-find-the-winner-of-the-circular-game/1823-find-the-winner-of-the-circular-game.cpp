class Solution {
public:
    int josephus(int n, int k) {
        // Base case
        if (n == 1) {
            return 0;
        }
        // Recursive step
        return (josephus(n - 1, k) + k) % n;
    }

    int findTheWinner(int n, int k) {
        return josephus(n, k) + 1;
    }
};
