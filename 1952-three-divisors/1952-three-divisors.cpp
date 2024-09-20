class Solution {
public:
    bool isThree(int n) {
        set<int>st;
        for(int i=1; i*i<=n; i++){
            if(n%i==0){st.insert(i);st.insert(n/i);}
        }
        return st.size()==3;
    }
};