class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int ans=0,cal;
        for(int i=0;i<n;i++){
            if(nums[i]==1)cal++;
            if(nums[i]==0)cal=0;
            ans=max(ans,cal);
        }
        return ans;
    }
};