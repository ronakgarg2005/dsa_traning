class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=fruits.size();
        int m=baskets.size();
        for(int j=0;j<n;j++){
            int a=fruits[j];
            for(int i=0;i<m;i++){
                if(a<=baskets[i]){
                    baskets[i]=0;
                    fruits[j]=0;
                    break;
                }
            }
        }
        int i=n-1,s=0;
        while(i>=0){
              if(fruits[i]!=0)s+=1;
              i--;    
        }
        return s;
    }
};