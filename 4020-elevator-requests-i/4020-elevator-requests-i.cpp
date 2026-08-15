class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
              int m=requests.size();
        int a=requests[0];
         int c;
        for(int i=1;i<m;i++){
           c=abs(requests[i]-requests[i-1]);
           a+=c;
        }
        return a;
    }
};