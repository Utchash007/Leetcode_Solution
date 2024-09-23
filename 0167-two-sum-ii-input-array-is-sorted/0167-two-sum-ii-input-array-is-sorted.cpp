class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>v(2,0);
       int l=0, r=numbers.size()-1;
       while(l<r){
           if(numbers[l]+numbers[r]>target)--r;
           else if(numbers[l]+numbers[r]<target)++l;
           else{
               v[0]=l+1; v[1]=r+1; return v;
           }
       }
        return v;
    }
};