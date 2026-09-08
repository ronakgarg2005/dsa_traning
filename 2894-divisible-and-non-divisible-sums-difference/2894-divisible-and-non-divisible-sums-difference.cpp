class Solution {
public:
    int differenceOfSums(int n, int m) {
        int a=n/m;
        n*=(n+1);
        n/=2;
        a*=(a+1)*m;
        a/=2;
        return n-2*a;        
        
    }
};