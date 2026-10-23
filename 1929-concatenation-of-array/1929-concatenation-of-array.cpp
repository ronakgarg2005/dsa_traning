class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>num=nums;
        for(int i:nums){
            num.push_back(i);
        }
        return num;
        

        
    }
};