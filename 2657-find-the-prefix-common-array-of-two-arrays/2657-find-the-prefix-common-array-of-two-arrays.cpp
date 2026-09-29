class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int c=1;
        unordered_set<int>st;
        vector<int>ans;
        for(int i=0;i<A.size();i++){
            st.insert(A[i]);
            st.insert(B[i]);
            ans.push_back(2*c-st.size());
            c++;
        }return ans;
    }
};