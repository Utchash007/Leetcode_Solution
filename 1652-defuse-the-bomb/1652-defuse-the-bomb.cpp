class Solution {
    using ll=int;
public:
    vector<int> decrypt(vector<int>& code, int k) {
        if(k<0)reverse(code.begin(),code.end()); int n=code.size();
      ll p=abs(k);
        vector<int>v(n,0);
        for(ll i=0; i<n; i++){
            for(ll j=1; j<=p; j++){
                v[i]=(v[i]+code[(i+j)%n]);
            }
        }
        if(k<0)reverse(v.begin(),v.end()); 
        return v;
    }
};