class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       vector<int>left(nums);int n=nums.size();
       vector<int>right(nums);
       for(int i=1; i<nums.size(); i++){
        if(i%k==0)left[i]=left[i];else left[i]=max(left[i],left[i-1]);
        int j=(nums.size()-i-1);
        if(j%k==0)right[j]=right[j]; else right[j]=max(right[j], right[j+1]);
       }
        vector<int>v;
        for(int i=0; i<n-k+1; i++){
            int maxi=max(right[i], left[i+k-1]);
            v.push_back(maxi);
        }
       
    
        return v;

    }
};