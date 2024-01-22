class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0)
            return false;
        double p = log2(n);
        int p1 = p;
        if (p != p1)
            return false;
        return ((int)p % 2 == 0);
    }
};