class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& v) {
        stack<int>st;
        vector<int>ans(v.size(),0);
        for(int i=0; i<v.size(); i++){

        while(!st.empty() && v[st.top()]<v[i]){
            int idx=st.top();st.pop();
            ans[idx]=i-idx;
        }
            st.push(i);
        }
        return ans;
    }
    
};