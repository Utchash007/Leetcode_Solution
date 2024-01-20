class Solution {
public:
    void sortColors(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            bool issorted = true;
            for (int j = 0; j < nums.size() - 1 - i; j++) {
                if (nums[j] > nums[j + 1]) {
                    issorted = false;
                    swap(nums[j], nums[j + 1]);
                }
            }
            if (issorted)
                break;
        }
    }
};
