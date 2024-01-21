class Solution {
public:

int log_a_to_base_b(int a, int b)
{
    int ans = 0;
    while (a > 1) {
        a /= b;
        ans++;
    }
    return ans;
}
    bool isPowerOfThree(int n) {
        int k=log_a_to_base_b(n,3);
        return (int)pow(3,k)==n;
    }
};