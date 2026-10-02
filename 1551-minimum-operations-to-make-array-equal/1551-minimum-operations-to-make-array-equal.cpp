class Solution {
public:
    int minOperations(int n) {
      if(n%2==0)return pow(n/2,2);
     int sum=0;
     int a=2;
     while(n/2>0){
         sum+=a;
         a+=2;
         n-=2;
     }return sum;
    }
};