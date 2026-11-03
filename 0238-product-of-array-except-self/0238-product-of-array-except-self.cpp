class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>p_mul(n,1);
        p_mul[0]=1;
        for(int i=1;i<n;i++){
            p_mul[i]=p_mul[i-1]*nums[i-1];
        }
        int a=1;
         for(int i=n-1;i>=0;i--){
            p_mul[i]*=a;
            a=a*nums[i];
        }
        return p_mul;
        
       
    }
};