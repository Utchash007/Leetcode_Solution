class Solution {
public:
    string minWindow(string s, string t) {
         vector<int>mp(128,0);
          for(auto &u:t)mp[u]++;
          int counter=t.size(),begin=0,end=0,d=INT_MAX,head=0;
          while(end<s.size()){
            if(mp[s[end++]]-->0)counter--;
            while(counter==0){
                if(end-begin<d)d=end-(head=begin);
                if(mp[s[begin++]]++==0)counter++;
            }
          }
           return d==INT_MAX? "":s.substr(head, d);
    }
};