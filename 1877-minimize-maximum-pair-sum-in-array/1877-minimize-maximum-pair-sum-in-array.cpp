class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int b=0,sum;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()/2;i++){
             sum=nums[i]+nums[nums.size()-i-1];
             b=max(sum,b);
        }return b;
    }
};