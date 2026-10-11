class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0;
        int r=0;
        int len=0;
        int mx=0;
        int z=0;
        while(r<n){
            if(nums[r]==0)z++;
            if(z>k){
                if(nums[left]==0)z--;
                left++;
                
            }
            else{
                len=r-left+1;
                mx=max(len,mx);
            }
            
            r++;

        }return mx;
        
    }
};