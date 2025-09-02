class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(auto x:strs){
            ans.push_back('.');
            ans+=x;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        string p="";
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
