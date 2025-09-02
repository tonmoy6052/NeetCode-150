class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]]==0)m[nums[i]]=i+1;
        }
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            if(m[target-x]&&i+1!=m[target-x]){
                ans.push_back(i);
                ans.push_back(m[target-nums[i]]-1);
                break;
            }
        }
        if(ans[0]>ans[1])swap(ans[0],ans[1]);
        return ans;
    }
};
