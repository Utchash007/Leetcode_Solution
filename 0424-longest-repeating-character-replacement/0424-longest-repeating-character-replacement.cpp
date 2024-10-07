class Solution {
public:
    int characterReplacement(string s, int k) {
        set<char>st;for(auto &u:s)st.insert(u);
        int replace=0,maxi=-1,n=s.size();
        for(auto &u:st){
            int i=0,j=0;replace=0;
            while(j<n){
                if(s[j]==u)++j;
                else if(replace<k)replace++,j++;
                else if(s[i]==u)++i;
                else{
                    i++,replace--;
                }
                maxi=max(maxi,j-i);
            }
            
        }

        return maxi;
    }
};