class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        string m;
        unordered_set<int>st;
        for(int n:nums){
            
            st.insert(n);
            m=to_string(n);
            reverse(m.begin(),m.end());
            int a=stoi(m);
            st.insert(a);
        }
        return st.size();
    }
};