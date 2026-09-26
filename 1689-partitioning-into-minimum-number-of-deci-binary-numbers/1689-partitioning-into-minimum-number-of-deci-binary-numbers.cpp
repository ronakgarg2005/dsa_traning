class Solution {
public:
    int minPartitions(string n) {
        int k=0;
        for(char c:n){
            int a=c-'0';
            k=max(k,a);
        }
        return k;
    }
};