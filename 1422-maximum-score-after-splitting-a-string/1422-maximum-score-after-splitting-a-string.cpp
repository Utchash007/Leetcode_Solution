class Solution {
public:
    int maxScore(string s) {
        vector<int>zero(s.size(),0),one(s.size(),0);
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1')one[i]++;
            else zero[i]++;
        }
        //prefixsum
        for(int i=1; i<s.size(); i++)zero[i]+=zero[i-1],one[i]+=one[i-1];
        int maxi=-99;
        for(int i=0; i<s.size()-1; i++){
            maxi=max(maxi,zero[i]+one[s.size()-1]-one[i]);
        }
        return maxi;
    }
};