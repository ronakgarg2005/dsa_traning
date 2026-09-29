class Solution {
public:
    int countVowelStrings(int n) {
        vector<int>ans={1,1,1,1,1};
        for(int i=1;i<n;i++){
            for(int j=3;j>=0;j--){
                ans[j]=ans[j+1]+ans[j];
            }
        }int sum=0;
        for(int m:ans){
           sum+=m;
        }
        return sum;
    }
};