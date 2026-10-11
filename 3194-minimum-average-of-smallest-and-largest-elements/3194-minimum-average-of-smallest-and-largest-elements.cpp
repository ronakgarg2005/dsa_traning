class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
       double mn=INT_MAX;
       double a;
       for(int i=0;i<=n/2;i++){
        a=nums[i]+nums[n-1-i];
        a/=2.0;
        mn=min(mn,a);
       }
        return mn;
    }
};