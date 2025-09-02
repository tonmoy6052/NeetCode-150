class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        vector<pair<int,int>>ans1;
        map<int,int>m;
        for(auto x:nums)m[x]++;
        for(auto [x,y]:m)ans1.push_back({y,x});
        sort(ans1.begin(),ans1.end());
        for(int i=ans1.size()-k;i<ans1.size();i++){
            ans.push_back(ans1[i].second);
        }
        return ans;
    }
};
