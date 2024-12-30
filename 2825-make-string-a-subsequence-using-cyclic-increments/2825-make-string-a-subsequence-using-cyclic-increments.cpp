class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        //two pointer?
        int i=0,j=0;
        while(i<str1.length() && j<str2.length()){
            if(str1[i]==str2[j]){++i;++j;}
            else if(((int)(str1[i] - 'a') + 1) % 26 == ((int)(str2[j] - 'a'))){++i;++j;}
            else ++i;
        }
        
        if(j==str2.length())return true;
        else return false;
    }
};