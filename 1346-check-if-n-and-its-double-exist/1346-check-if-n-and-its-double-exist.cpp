class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        map<int,int>mp;
        for(auto &u:arr){if(( mp[u * 2] == 1) || ( mp[u / 2] == 1 && !(u & 1)))
            return true; else mp[u]++;}
        return false;
    }
};