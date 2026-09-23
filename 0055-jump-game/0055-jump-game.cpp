class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int  m=0,i=0,a=0;
        for(int n: nums){
            a=n+i;
            if(m<i)return false;
           
            m=max(a,m);
            i++;
            if(m>=nums.size())return true;
            }
        return true;
    }
};