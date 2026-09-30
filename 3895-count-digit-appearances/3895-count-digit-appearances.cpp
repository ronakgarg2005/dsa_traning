class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        string m="";
        for(int n:nums){
            string a=to_string(n);
            m+=a;
        }int b=digit+'0';
        int count=0;
        for(char c:m){
            if(int(c)==b)count++;
        }
        return count;
    }
};