class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a =accumulate(nums.begin(),nums.end(),0);
        set<int> s(nums.begin(),nums.end());
        int m=accumulate(s.begin(),s.end(),0);
        return 2*m-a;


                
    }
};