class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        auto a=nums;
        int n=a.size();
        map<int,set<int>>m;
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            m[a[i]].insert(i);
        }
        set<vector<int>>ans;
        vector<vector<int>>res;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int k=-(a[i]+a[j]);
                auto x=m[k].upper_bound(j);
                if(x==m[k].end())continue;
                ans.insert({a[i],a[j],a[*x]});
            }
        }
        for(auto x:ans)res.push_back(x);
        return res;
    }
};
