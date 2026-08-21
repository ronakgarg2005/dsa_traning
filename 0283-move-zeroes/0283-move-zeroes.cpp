class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        vector<int> vec(n,0);
        int c=0;
        for(int x : nums){
            if(x!=0){
                vec[c]=x;
                c++;
            }
        } nums =vec;
    } 
};