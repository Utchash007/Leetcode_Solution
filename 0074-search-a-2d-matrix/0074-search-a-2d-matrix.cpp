class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto &v: matrix){
            if(target>v[v.size()-1])continue;
            int l=0,r=v.size();
            while(l<=r){
                int mid=(l+r)/2;
            if(v[mid]==target)return true;
            if(v[mid]<target)l=mid+1;
            else r=mid-1;
            }
        }

        return false;
    }
};