class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        string x="";int count=1;
        for(auto &u : sentence){
            if(u>='a' && u<='z'){
                x+=u;
                if(x==searchWord)return count;
            }
            else{
                x=""; count++;
            }
        }
        if(x==searchWord)return count;
        
        return -1;
    }
};