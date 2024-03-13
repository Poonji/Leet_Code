class Solution {
public:
    int pivotInteger(int n) {
        int sum1 = 0;
        int sum2 = 0;
        for (int x = 1; x <= n; x++) {
            sum1 += x;
            sum2 = 0; // Reset sum2 for each new value of x
            for (int j = x; j <= n; j++) {
                sum2 += j;
            }
            if (sum1 == sum2) {
                return x;
            }
        }
        return -1;
    }
};
