class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;

        for(char c : s)
            mp[c]++;

        int ans = 0;

        for(auto p : mp){
            ans += (p.second / 2) * 2;   
            if(ans % 2 == 0 && p.second % 2 == 1)
                ans++;                   
        }

        return ans;
    }
};