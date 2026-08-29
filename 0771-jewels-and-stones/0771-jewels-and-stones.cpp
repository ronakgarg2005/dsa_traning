class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>mp;
        for(char x: stones){
            mp[x]++;
        }
        int count =0;
        for(char x:jewels){
            count+=mp[x];
        }
        return count;
    }
};