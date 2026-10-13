class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> ans;
        for(int n:nums){
            ans.push_back(n*n);
        }
        sort(ans.begin(),ans.end());
        long long soln=0;
        int n=nums.size();
        for(int i=0;i<n/2;i++){
            soln+=ans[n-i-1];
            soln-=ans[i];
        }
        if(n%2==1)soln+=ans[n/2];
        return soln;
        
    }
};