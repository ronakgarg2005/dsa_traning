class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int n:nums){
            mp[n]++;
        }
        int i=0;
        while(mp[0]!=0){
          nums[i]=0;
          mp[0]--;
          i++;
        }
        while(mp[1]!=0){
          nums[i]=1;
          mp[1]--;
          i++;
        }
        while(mp[2]!=0){
          nums[i]=2;
          mp[2]--;
          i++;
        }


    }
};