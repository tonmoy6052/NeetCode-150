class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        //edge case
        if(strs.size()==0)return ans;
        for(auto x:strs){
            ans.push_back('.');
            ans+=x;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        string p="";
        //edge case
        if(s.size()==0){
            return ans;
        }
        //edge case
        if(s.size()==1){
            ans.push_back(p);
            return ans;
        }
        for(int i=1;i<s.size();i++){
            if(s[i]=='.'){
                ans.push_back(p);
                p="";
                continue;
            }
            p.push_back(s[i]);
        }
        ans.push_back(p);
        return ans;
    }
};
