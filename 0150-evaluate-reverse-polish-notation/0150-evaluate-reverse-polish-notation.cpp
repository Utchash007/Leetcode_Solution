class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st; reverse(tokens.begin(), tokens.end());
        while(!tokens.empty()){
            string s=tokens.back();
            tokens.pop_back();
            if(s!="+" && s!="-" && s!="*" && s!="/"){
                st.push(stoi(s));
            }else{
                int b=st.top();st.pop();
                int a=st.top();st.pop();

                if(s=="+")st.push(a+b);
                else if(s=="-")st.push(a-b);
                else if(s=="*")st.push(a*b);
                else st.push(a/b);
            }
        }

        return st.top();
    }
};