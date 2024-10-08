class Solution {
public:
    int reverse(int x) {
          long long int m=abs(x);
          long long int ans=0;

          while(m>0){
                int p=m%10;
                ans=(ans*10)+p;
                m/=10;
          }
          if(ans>INT_MAX)return 0;
          if(x<0)return -ans;
          return ans;
          
    }
};