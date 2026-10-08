class Solution {
public:
    string removeOuterParentheses(string s) {
        string m="";
        stack<char>st;
        int c1=0,c2=0;
        for(char c: s){
            if(st.empty()){
                st.push(c);
            }
            else{
                if(c==st.top()){
                    m+=c;
                    c1++;}
                if(c!=st.top()){
                    if(c2>=c1)st.pop();
                    else {
                        m+=c;
                        c2++;}
                }
            }
        }return m;
    }
};