class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int,int>mp;
        for(int n: bills){
            if(n==5)mp[5]++;
            else if(n==10){
                if(mp[5]==0)return false;
                else {
                    mp[5]--;
                    mp[10]++;
                }
            }
            else if(n==20){
                if(mp[5]==0)return false;
                else if(mp[10]>0){
                    mp[10]--;
                    mp[5]--;
                }
                else if(mp[5]<3)return false;
                else mp[5]-=3;

            }
        } return true;
    }
};