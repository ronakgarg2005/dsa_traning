class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> freq;

        for (int x : nums) {
            freq[x]++;
        }

        int ans = 0;

        for (auto [x, count] : freq) {
            if (count == 1) {
                ans += x;
            }
        }

        return ans;
    }
};