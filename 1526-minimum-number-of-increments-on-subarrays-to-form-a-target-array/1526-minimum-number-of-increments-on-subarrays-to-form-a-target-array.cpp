class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int a=target[0];
        for(int i=1;i<target.size();i++){
            if(target[i]>target[i-1]){
                a+=target[i]-target[i-1];
            }
        }return a;
    }
};