class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int maxi=-1;int ans=0;
        for(int i=0; i<n; i++)maxi=max(height[i],maxi);
        int tar=0;int diff=0;
        for(int i=0; i<n; i++){if(height[i]==maxi){tar=i;break;}}
        vector<int>v(height);//unnecessary
        for(int i=0,j=1; i<=tar,j<=tar; j++){
            if(v[i]>v[j]){
                diff+=abs(v[i]-v[j]);
            }else{
                ans+=diff;
                i=j;diff=0;
            }
        }

        for(int i=n-1,j=i-1; i>=tar,j>=tar; j--){
            if(v[i]>v[j]){
                diff+=abs(v[i]-v[j]);
            }else{
                ans+=diff;
                i=j;diff=0;
            }
        }
        cout<<ans<<endl;
        return ans;

    }
};