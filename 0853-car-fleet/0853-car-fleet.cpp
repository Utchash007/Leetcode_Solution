class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        map<int,double>mp;
        for(int i=0; i<speed.size(); i++){
            mp[-position[i]]=1.0*(target-position[i])/speed[i];
        }
        int ans=0; double cur=0;
        for(auto &u:mp)if(cur<u.second){cur=u.second; ans++;}
        return ans;
    }
};