class Solution {
public:
    bool isPalindrome(string s) {
        string c="";
        for(auto x:s){
            if(x>='a'&&x<='z')c+=(x);
            if(x>='A'&&x<='Z')c+=(x+32);
            if(x>='0'&&x<='9')c+=(x);
        }
        string d=c;
        reverse(c.begin(),c.end());
        return (c==d);
    }
};
