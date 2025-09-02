class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long int p=1;
        int f=0;
        for(auto x:nums) {
            if(x==0){
            f++;
            continue;
            }
            p*=x;
        }
        vector<int>ans;
        for(auto x:nums){
            if(x==0){
                if(f==1){
                    ans.push_back(p);
                }else ans.push_back(0);
                continue;
            }
            if(f)ans.push_back(0);
            else ans.push_back(p/x);
        }
        return ans;
    }
};
