class Solution {
public:
    bool checksdn(int n){
        int c=n;
        while(n>0){
            int a=n%10;
            if(a==0 || c%a!=0)return false;
            n/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>vec;
        for(int i=left;i<=right;i++){
            if(checksdn(i)){
                vec.push_back(i);
            }
        }
        return vec;
        
    }
   
};