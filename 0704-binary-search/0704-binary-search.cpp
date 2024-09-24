class Solution {
public:
    int search(vector<int>& v, int target) {
        int l=0,r=v.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(v[mid]==target)return mid;
            if(v[mid]<target)l=mid+1;
            else r=mid-1;
        }
        return -1;
    }
};