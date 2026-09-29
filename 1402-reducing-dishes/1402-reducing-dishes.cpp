class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int a,b=0;
        int sum=0,ans=0;
        int n=satisfaction.size();
        for(int i=0;i<n;i++){
            a=1;
            for(int j=b;j<n;j++){
                sum+=satisfaction[j]*a;
                a++;
            }
            b++;
            ans=max(sum,ans);
            sum=0;
        }return ans;
    }
};