class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,vector<int>>, vector<pair<int,vector<int>>>, greater<> >pq;
        for(auto &u:points){
            pq.push({u[0]*u[0]+u[1]*u[1], u});
        }
        int ans=pq.top().first;
        vector<vector<int>>v;int t=0;
        while(!pq.empty() && t<k){
            v.push_back(pq.top().second);
            pq.pop();++t;
        }
        return v;
    }
};