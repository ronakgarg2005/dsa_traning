class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int>mp;
         unordered_map<char,int>mp1;
        for(char x:s){
            mp[x]++;
        }
        int a=s.length();
        for(char x:target){
            mp1[x]++;
        }
        for(char x:target){
          a=min(a,mp[x]/mp1[x]);
        }

        return a;
    }
};