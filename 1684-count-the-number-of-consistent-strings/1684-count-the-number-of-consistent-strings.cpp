class Solution {
public:
    bool chk(string s,unordered_set<char>st,int a){
        
        for(char c:s){
            st.insert(c);
        }
        return a==st.size();
    }
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;
        unordered_set<char>st;
        
        for(char c:allowed){
            st.insert(c);
        
        }
        int l=st.size();
        for(string c:words){
            if(chk(c,st,l))count++;
        }
        return count;


    }
};