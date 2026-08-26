class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>mp;

        for(char x :t){
            mp[x]++;
        }
        for(char x:s){
            mp[x]--;
        }
         for(char x:t){
            if(mp[x]!=0)return x;
        }
        return 'a';


    }
};