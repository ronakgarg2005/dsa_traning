class Solution {
public:
    bool checkGoodInteger(int n) {
        int s=0,su=0;
        while(n>0){
            int c=n%10;
            s+=c;
            su+=(c*c);
            n/=10;
        }
        return (su-s)>=50;
    }
};