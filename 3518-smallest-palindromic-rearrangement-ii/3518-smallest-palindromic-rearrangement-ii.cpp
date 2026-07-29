class Solution {
public:
    static const int LIM = 1000001;

    long long C(int n, int r) {
        if (r < 0 || r > n) return 0;
        r = min(r, n - r);
        long long res = 1;
        for (int i = 1; i <= r; i++) {
            res = res * (n - r + i) / i;
            if (res >= LIM) return LIM;
        }
        return res;
    }

    long long ways(vector<int> &cnt) {
        int rem = 0;
        for (int x : cnt) rem += x;

        long long ans = 1;
        int left = rem;

        for (int x : cnt) {
            if (x == 0) continue;
            ans *= C(left, x);
            if (ans >= LIM) return LIM;
            left -= x;
        }
        return ans;
    }

    string smallestPalindrome(string s, int k) {
        vector<int> freq(26, 0);
        for (char c : s) freq[c - 'a']++;

        vector<int> half(26, 0);
        string mid = "";

        for (int i = 0; i < 26; i++) {
            half[i] = freq[i] / 2;
            if (freq[i] % 2) mid.push_back(char('a' + i));
        }

        if (ways(half) < k) return "";

        int len = s.size() / 2;
        string first = "";

        for (int pos = 0; pos < len; pos++) {
            for (int c = 0; c < 26; c++) {
                if (half[c] == 0) continue;

                half[c]--;
                long long cur = ways(half);

                if (cur >= k) {
                    first.push_back(char('a' + c));
                    break;
                } else {
                    k -= cur;
                    half[c]++;
                }
            }
        }

        string second = first;
        reverse(second.begin(), second.end());

        return first + mid + second;
    }
};