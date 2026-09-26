class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_map<int,int>mp;
        for(int c:friends){
            mp[c]++;
        }
        vector<int>vec;
        for(int c: order){
            if(mp[c]==1){
                vec.push_back(c);
            }
        }
        return vec;
    }
};