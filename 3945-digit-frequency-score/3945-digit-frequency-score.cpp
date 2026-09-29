class Solution {
public:
    int digitFrequencyScore(int n) {
        int sum=0;
        int a;
        while(n>0){
            a=n%10;
            sum+=a;
            n/=10;
        }return sum;
    }
};