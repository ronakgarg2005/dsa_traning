class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum=0;
        int i=1;
        int l=nums.size();
        for(int n:nums){
            if(l%i==0){
                sum+=(n*n);
            }
            i++;
        }
        return sum;
        
    }
};