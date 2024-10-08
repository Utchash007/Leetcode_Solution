class Solution {
public:
    int countPrimes(int n) {
        if(n==0 || n==1)return 0;
        bool st[n+1];
        for(int i=0; i<=n; i++)st[i]=0;
        for(int i=2; i<=n; i++){
            if(!st[i]){for(int j=i+i; j<=n; j+=i)st[j]=1;}
        }
        int x=0;
        for(int i=2; i<n; i++)if(!st[i])++x;
        return x;
    }
};

/*auto boom = [](){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();*/