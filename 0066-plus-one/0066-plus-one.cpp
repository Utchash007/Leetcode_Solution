class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(), digits.end());
        int index=0, n=digits.size(), carry=0;
                 digits[0]+=1;
                digits[0]%=10;
                if(digits[0]==0)carry=1;
        for(int i=1; i<n; i++){
            if(carry){
                digits[i]+=carry;
                carry=0;
                digits[i]%=10;
                if(digits[i]==0)carry=1;
            }
        }
        if(carry)digits.push_back(1);
        reverse(digits.begin(), digits.end());
        return digits;
    }
};