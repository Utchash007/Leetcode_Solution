class Solution {
public:
    int findNonMinOrMax(vector<int>& v) {
        sort(v.begin(),v.end());
        if(v.size()<=2)return -1;
        return v[1];
    }
};