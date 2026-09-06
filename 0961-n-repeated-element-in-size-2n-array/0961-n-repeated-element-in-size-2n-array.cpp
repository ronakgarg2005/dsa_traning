class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> mp;
        int a, n=nums.size();
        for(int x: nums){
            mp[x]++;
            if(mp[x]==(n/2)){
                a=x;
                break;
            }
        }
        return a;
    }
};