class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int a = pref[0];
        vector<int> ans;
        ans.push_back(a);
        for (int i = 1; i < pref.size(); i++)
        {
            int c=(a ^ pref[i]);
            ans.push_back(c);
            a=pref[i];
        }return ans;
    }
};