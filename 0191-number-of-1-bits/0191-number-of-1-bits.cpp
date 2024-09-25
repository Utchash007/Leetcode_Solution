class Solution {
public:
    int hammingWeight(int n) {
        // builtin function
        return __builtin_popcount(n);
    }
};