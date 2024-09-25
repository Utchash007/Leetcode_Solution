class Solution {
public:
    int hammingWeight(uint32_t n) {
        int setBits = __builtin_popcount(n);
        return setBits;
    }
};