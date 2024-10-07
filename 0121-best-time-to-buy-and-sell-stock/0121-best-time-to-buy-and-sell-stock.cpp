class Solution {
public:
    int maxProfit(vector<int>& v) {
        int maxi=0,n=v.size();
        for(int i=0,j=i+1; i<n,j<n; j++){
            if(v[i]>v[j]){
                i=j;
            }else{
                maxi=max(maxi,v[j]-v[i]);
            }
        }
        return maxi;
    }
};