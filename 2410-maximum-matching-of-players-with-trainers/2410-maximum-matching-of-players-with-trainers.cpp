class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int i=0,j=0,k=0;
        sort(players.begin(),players.end()); sort(trainers.begin(),trainers.end());
        while(i<players.size() && j<trainers.size()){
            if(trainers[j]>=players[i])++k,++i,++j;
            else ++j;
        }
        return k;
    }
};
auto boom = [](){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();