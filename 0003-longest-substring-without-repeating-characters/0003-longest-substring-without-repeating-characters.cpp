class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,m=s.length(),n=0;
        unordered_set<char>st;
        while(r<m){
            if(st.find(s[r])==st.end()){
                st.insert(s[r]);
                n=max(n,(r-l)+1);
                r++;
            }
            else{
                st.erase(s[l]);
                l++;
            }
            
        }
        return n;
    }
};