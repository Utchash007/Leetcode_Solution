class Solution {
public:
    bool isPalindrome(string s) {
        //s.erase(remove(s.begin(), s.end(),' '));
        transform(s.begin(), s.end(), s.begin(), :: tolower);
        //cout<<s<<endl;
        string ans="";
        for(auto &u:s){
            if((u>='a' && u<='z' )|| (u>='0' && u<='9'))ans+=u;
        }
        string s1=ans;
        reverse(s1.begin(), s1.end());
        //cout<<ans<<" "<<s1<<"\n";
        return (ans==s1);
    }
};

auto boom = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0); 
};
