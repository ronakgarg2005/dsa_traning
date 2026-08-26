class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
             unordered_map<char,int>mp;
             for(char x :ransomNote){
                mp[x]++;
             }
             for(char x :magazine){
                mp[x]--;
             }
             for(char x :ransomNote){
                if(mp[x]>0)return false;
             }
             return true;
            
    }
};