class Solution {
public:
    bool isvowel(char g){
        if(g=='A'||g=='E'||g=='I'||g=='O'||g=='U'||g=='a'||g=='e'||g=='i'||g=='o'||g=='u'){
            return true;
        }
        else return false;
    }
    string reverseVowels(string s) {
        int n= s.length();
        int i=0;
        while(i<n){
            if(isvowel(s[i])&&isvowel(s[n-1])){
                swap(s[i],s[n-1]);
                i++;
                n--;}
            else if(!isvowel(s[i])&&isvowel(s[n-1]))i++;
            else if(!isvowel(s[n-1])&& isvowel(s[i]))n--;
            else {
                i++;
                n--;
            }

        }
        return s;
        
    }
};