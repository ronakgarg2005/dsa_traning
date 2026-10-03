class Solution {
public:
    int conv(string s) {
        int h = stoi(s.substr(0, 2));
        int m = stoi(s.substr(3, 2));
        return h * 60 + m;
    }

    int findMinDifference(vector<string>& timePoints) {
        vector<int> time;

        for (string s : timePoints)
            time.push_back(conv(s));

        sort(time.begin(), time.end());

        int ans = INT_MAX;

        for (int i = 1; i < time.size(); i++)
            ans = min(ans, time[i] - time[i - 1]);

        ans = min(ans, 1440 - time.back() + time[0]);

        return ans;
    }
};
