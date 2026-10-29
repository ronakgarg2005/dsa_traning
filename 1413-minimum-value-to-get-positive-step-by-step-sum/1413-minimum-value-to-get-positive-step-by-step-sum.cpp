class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n=nums.size();
        vector<int>p_sum(n,0);
        p_sum[0]=nums[0];
        int mn=INT_MAX;
        for(int i=1;i<n;i++){
            p_sum[i]=p_sum[i-1]+nums[i];
            mn=min(mn,p_sum[i]);
                    }
            mn=min(mn,p_sum[0]);
        if(mn<1) return ((-1)*mn)+1;
        return 1;
    }
};