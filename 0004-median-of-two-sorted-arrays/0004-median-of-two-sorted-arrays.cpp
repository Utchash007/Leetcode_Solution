class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(auto &u: nums1)v.push_back(u); for(auto &u: nums2)v.push_back(u);
        sort(v.begin(),v.end());
        if(v.size()%2==1)return (v[v.size()/2]*1.0);
        return  ((v[v.size()/2]+v[v.size()/2-1])*1.0/2);
    }
};