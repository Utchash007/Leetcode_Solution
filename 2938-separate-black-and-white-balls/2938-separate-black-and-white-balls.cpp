class Solution {
public:
    long long minimumSteps(string s) {
        // white 0
      long long  int step1=0,step2=0,j=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='0'){step1+=abs(i-j); j++;}
        }
        cout<<step1<<"\n";
        j=0;
        reverse(s.begin(), s.end());
         for(int i=0; i<s.size(); i++){
            if(s[i]=='1'){step2+=abs(i-j); j++;}
        }

         cout<<step1<<"\n";
         return min(step1,step2);
    }
};