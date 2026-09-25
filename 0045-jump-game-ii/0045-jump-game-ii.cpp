class Solution {
public:
    int jump(vector<int>& nums) {
       
        if(nums.size()==1)return 0;
        int curr=0,farr=0,jump=0;
        for (int i = 0; i <nums.size(); i++) {
            farr=max(farr,i+nums[i]);
            if(curr==i){
                jump++;
                curr=farr;
                if(farr>=nums.size()-1)break;
            }            
            }
        return jump;
    }
    
};