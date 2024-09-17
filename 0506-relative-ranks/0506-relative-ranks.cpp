class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>v(score);
        sort(v.begin(),v.end(),greater<int>());

        map<int,string>mp;
        for(int i=0; i<score.size(); i++){
            if(i==0)mp[v[i]]="Gold Medal";
            else if(i==1)mp[v[i]]="Silver Medal";
            else if(i==2)mp[v[i]]="Bronze Medal";
            else{
                string s=to_string(i+1);
                mp[v[i]]=s;
            }
        }
        vector<string>ans;
        for(auto &u:score){
            ans.push_back(mp[u]);
        }

        return ans;

    }
};
auto boom = [](){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();
