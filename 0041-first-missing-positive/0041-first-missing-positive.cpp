class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int a=0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            a=max(nums[i],a);
        }
        for(int i=1;i<=n;i++){
            if(mp[i]==0)return i;
        }
        return a+1;
       
    }
};