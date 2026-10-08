class Solution {
public:
    int kthFactor(int n, int k) {
        int c=0,m=-1;
        bool flag =false;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                c++;
                flag=true;
                m=i;
                if(c==k){
                    break;
                }
            }
        }
        if(flag){
            if(c==k)return m;
        }
        return -1;

    }
};