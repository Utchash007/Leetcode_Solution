class Solution {
public:
    int countPrimes(int n) {
        if(n==0 || n==1)return 0;
        vector<bool>st(n+1,false);
        for(int i=2; i<=n; i++){
            if(!st[i]){for(int j=i+i; j<=n; j+=i)st[j]=1;}
        }
        int x=0;
        for(int i=2; i<n; i++)if(st[i])++x;
        return x;
    }
};