class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>mp;
        for(int i=0;i<knowledge.size();i++){
            mp[knowledge[i][0]]=knowledge[i][1];
        }
        bool flag=false;
        string m="",d="";
        for(char c:s){
            if(c==')'){
                if(mp[d]=="")mp[d]="?";
                m+=mp[d];
                flag=false;
                d="";
            }
            if(c=='(' ){
             flag=true;
            }
            if(flag&&c!='(')d+=c;
            
            if(!flag&&c!=')') m+=c;
        } return m;
    }
};