class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<int>ans;
        int a=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a+=matrix[i][j];
            }
            ans.push_back(a);
            a=0;
        }return ans;
    }
};