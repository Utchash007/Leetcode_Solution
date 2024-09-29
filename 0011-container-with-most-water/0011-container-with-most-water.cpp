class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=-1,n=height.size();
        int l=0,r=n-1;
        while(l<r){
                area=max(area, min(height[l], height[r])* abs(l-r));
                if(height[l]<height[r])++l;
                else --r;
            }
        
        return area;
    }
};