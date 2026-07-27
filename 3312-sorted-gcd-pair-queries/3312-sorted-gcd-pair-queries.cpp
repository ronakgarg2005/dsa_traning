class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int maxVal = *max_element(nums.begin(), nums.end());

        vector<int> freq(maxVal + 1, 0);

        for (int x : nums)
            freq[x]++;

        vector<long long> pairs(maxVal + 1, 0);

        for (int g = maxVal; g >= 1; g--) {
            long long count = 0;

            for (int multiple = g; multiple <= maxVal; multiple += g)
                count += freq[multiple];

            pairs[g] = count * (count - 1) / 2;

            for (int multiple = 2 * g; multiple <= maxVal; multiple += g)
                pairs[g] -= pairs[multiple];
        }

        for (int g = 1; g <= maxVal; g++)
            pairs[g] += pairs[g - 1];

        vector<int> ans;

        for (long long q : queries) {
            int left = 1, right = maxVal;

            while (left < right) {
                int mid = left + (right - left) / 2;

                if (pairs[mid] > q)
                    right = mid;
                else
                    left = mid + 1;
            }

            ans.push_back(left);
        }

        return ans;
    }
};