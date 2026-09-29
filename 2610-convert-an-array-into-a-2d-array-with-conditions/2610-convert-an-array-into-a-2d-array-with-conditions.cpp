class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int a=0;
       
        for(int i=0;i<nums.size();i++){
            if(i>0&&nums[i]==nums[i-1])a++;
            else a=0;
            if(a >= ans.size())
                ans.push_back({});
            ans[a].push_back(nums[i]);
        }return ans;
    }
};