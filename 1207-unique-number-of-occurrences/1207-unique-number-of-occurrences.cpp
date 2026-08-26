class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int x:arr){
            mp[x]++;
        }
        set<int>st;
        set<int>s(arr.begin(),arr.end());
        int a=0;
        for(int x:arr){
            st.insert(mp[x]);
        }
        return st.size()==s.size();

        
    }
};