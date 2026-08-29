class Solution {
public:
    int msd(int n){
        int a=9,b=0,c;
        while(n>0){
            c=n%10;
            a=min(a,c);
            b=max(b,c);
            n/=10;
        }
        return b-a;
    }
    int maxDigitRange(vector<int>& nums) {
        unordered_map<int,int>mp;
        int d=0;
        for(int n: nums){
            if(mp.count(msd(n))){
                mp[msd(n)]+=n;
            }
            else mp[msd(n)]=n;
            d=max(d,msd(n));
        }
        return mp[d];
                }
};