class Solution {
public:
    int minRotations(string s) {
        int count =0;
        int start=0;
        for(int i=0;i<s.length();i++){
            int c=abs(start-(s[i]-'0'));
            if(c>5)c=10-c;
            count+=c;
            start=s[i]-'0';
        }return count;
    }
};