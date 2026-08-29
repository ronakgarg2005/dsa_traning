class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        set<int>st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        vector<int>vec;
        for(int i=1;i<=n;i++){
            if(!st.count(i)){
                vec.push_back(i);
            }
        }
        return vec;

    }
};