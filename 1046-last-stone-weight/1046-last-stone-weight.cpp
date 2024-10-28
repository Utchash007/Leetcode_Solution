class Solution {
    using ll =int;
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<ll>pq;
        for(auto &u:stones)pq.push(u);
        while(pq.size()>1){
           ll y=pq.top();pq.pop();
            ll x=pq.top();pq.pop();
            if(y!=x)pq.push(y-x);
        }
        if(pq.empty())return 0;
        return pq.top();
    }
};