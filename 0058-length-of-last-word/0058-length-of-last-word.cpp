class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int a=0;
        while(n>0){
            if(s[n-1]!=' '){
                a+=1;
                if(n==1||s[n-2]==' ')break;
        }
        n--;}
        return a;
        }

};