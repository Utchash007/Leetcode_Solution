class Solution {
public:
    bool isValid(string s) {
       stack<char>st;
       int i=0;
       for(auto &u:s){
          if (u == '(' || u == '{' || u == '[') {
            st.push(u);++i;
        } else if (!st.empty() &&
                   ((u == ')' && st.top() == '(') ||
                    (u == '}' && st.top() == '{') ||
                    (u == ']' && st.top() == '['))) {
            st.pop();++i;
        }
          
       }
       if(!st.empty() && i==s.length())cout<<st.top();
       if(st.empty() && i==s.length())return 1;
       return 0;
    }
};