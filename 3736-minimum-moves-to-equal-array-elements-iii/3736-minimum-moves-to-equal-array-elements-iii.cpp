class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mx=0;
        for(int n:nums){
            mx =max(n,mx);
            }
            int total=0;
        for(int n:nums){
            total+=mx-n;
        }
        return total;
    }
};