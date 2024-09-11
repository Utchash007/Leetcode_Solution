class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
        for(auto &u:s)mp[u]++;
        int even=0,odd=0;bool f=0;
        for(auto &u:mp)(u.second&1)?f=1,odd+=u.second-1:even+=u.second;
        if(f)++odd;
        return even+odd;
    }
};