class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int p=1;
        int b=n;
        while(n>0){
            int a=n%10;
            sum+=a;
            p*=a;
            n/=10;
        }sum+=p;
        
        n=b%sum;
        return sum<=b&&n==0;
    }
};