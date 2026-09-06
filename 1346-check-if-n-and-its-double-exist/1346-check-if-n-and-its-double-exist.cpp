class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int>st;
        int c=0;
        for(int x: arr){
            if(x==0)c++;
            st.insert(x);
        }        
        if(c>1)return true;
        for(int x: arr){
            if(x!=0 && st.count(2*x))return true;
        }
        return false;
    }
};