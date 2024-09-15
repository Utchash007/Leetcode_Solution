class Solution {
public:
    double myPow(double x, int n) {
        // Handle the case when n is negative
        long N = n;
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }

        double result = 1.0;
        double current_product = x;
        
        while (N > 0) {
            // If N is odd, multiply the result by current_product
            if (N % 2 == 1) {
                result *= current_product;
            }
            // Square the base
            current_product *= current_product;
            // Divide N by 2
            N /= 2;
        }
        
        return result;
    }
};
