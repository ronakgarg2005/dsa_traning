class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        char b='a';
        int a=0;
        for(char c: s){
            if(c=='('){
                st.push(b);
            }
            if(c==')'){
                int d=st.size();
                a=max(a,d);
                st.pop();
            }
        }return a;
    }
};