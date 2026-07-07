class Solution {
public:

vector<int> store;
vector<vector<int>>ans;

void solve(vector<int>& nums,int index,int n, int target , int sum)
{
    if(sum<0) return ;
    if(sum==0)
    {
        ans.push_back(store);
        return;

    }
    if(index==n) return;
    store.push_back(nums[index]);

    solve(nums,index,n,target,sum-nums[index]);
    store.pop_back();
    solve(nums,index+1,n,target,sum);
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        int n=nums.size();

        solve(nums,0,n,target,target);
        return ans;
    }
};
