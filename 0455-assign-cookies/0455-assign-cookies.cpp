class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count=0;
        sort(g.begin(),g.end()); sort(s.begin(),s.end());
        reverse(g.begin(),g.end()); reverse(s.begin(),s.end());
        while(!g.empty() && !s.empty()){
            if(g.back()<=s.back()){
                ++count;
                s.pop_back(); g.pop_back();
            }else s.pop_back();
        }
        return count;
    }
};