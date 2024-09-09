class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector <string>> mp;
        for(auto &u:strs){
            string s=u;
            sort(s.begin(), s.end());
            mp[s].push_back(u);
        }

       vector<vector<string>>ans;
       for(auto &u: mp){
            // we will enter u.second as second element of map is vector
            vector<string>v;
            for(auto &p: u.second){
                v.push_back(p);
            }

            ans.push_back(v);
            v.clear();
       } 
    return ans;

    }
};