class Solution {
public:
    int cnt(string m){
        int sum=0;
        for(char c:m){
            if(c=='1')sum++;
        }
        return sum;
    }
    int numberOfBeams(vector<string>& bank) {
       
        int m=0,a=0;
        int sum=0,c=0;
        for(int i=0;i<bank.size();i++){
            m=cnt(bank[i]);
            if(m>0)a++;
            if(m!=0){
            sum+=m*c;
            c=m;}

        }
        if(a<2)return 0;
        return sum;
    }
};