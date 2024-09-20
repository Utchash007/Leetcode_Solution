class Solution {
public:

    string largestNumber(vector<int>& nums) {
        vector<string>v;
        for(auto &u:nums)v.push_back(to_string(u));
        sort(v.begin(), v.end(), [this](string a, string b) {
            string x = a, y = b;
            return x+y > y+x;
        });
        if(v[0]=="0")return "0";
        string ans="";
        for(auto &u:v)ans+=u;
        return ans;
    }
};