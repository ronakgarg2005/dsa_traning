class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>mp;
        for(char n:s){
            mp[n]++;
        }
        for(char n:t){
            if(mp[n]>0)mp[n]--;
        }
        int count=0;
        for(auto it:mp){
            count+=it.second;
        }
        return count;
    }
};