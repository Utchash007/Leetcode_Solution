class Solution {
public:
    int findMin(vector<int>& v) {
        int target=1e6+7;
        int l=0,r=v.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(v[mid]<=v[r])target=min(target,v[mid]),r=mid-1;
            else l=mid+1;
        }
        return target;
    }
};