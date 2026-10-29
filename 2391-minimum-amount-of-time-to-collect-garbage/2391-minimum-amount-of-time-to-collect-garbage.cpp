class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n = garbage.size();

        vector<int> p_sum(n, 0);

        for(int i = 1; i < n; i++) {
            p_sum[i] = p_sum[i-1] + travel[i-1];
        }

        int g = 0, p = 0, m = 0;
        int total = 0;

        for(int i = 0; i < n; i++) {
            for(char c : garbage[i]) {
                total++;

                if(c == 'G') g = i;
                if(c == 'P') p = i;
                if(c == 'M') m = i;
            }
        }

        total += p_sum[g] + p_sum[p] + p_sum[m];

        return total;
    }
};