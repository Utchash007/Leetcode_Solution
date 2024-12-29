class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans;
        ans="";
        int idx=0;
        for(int i=0; i<s.size(); i++){
            if(idx<spaces.size() &&spaces[idx]==i ){ans+=' '; ans+=s[i];++idx;}
            else ans+=s[i];
        }
        return ans;
    }
};