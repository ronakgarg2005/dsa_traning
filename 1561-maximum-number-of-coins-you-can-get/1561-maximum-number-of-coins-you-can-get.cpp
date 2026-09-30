class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n=piles.size();
        sort(piles.begin(),piles.end());
        int m=n-2;
        int d=n/3;
        int count=0;
        while(d>0){
            count+=piles[m];
            m-=2;
            d--;
        }
        return count;
    }
};