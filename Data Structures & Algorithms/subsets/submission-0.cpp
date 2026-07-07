class Solution {
public:
vector<vector<int>>ans;
vector<int>store;
void solve(vector<int>& nums,int ind ,int n)
{

    //base 
    if(ind==n)
    {
        ans.push_back(store);
        return;

    }
    store.push_back(nums[ind]);
    solve(nums,ind+1,n);
    store.pop_back();
    solve(nums,ind+1,n);
return;

}
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        solve(nums,0,n);
        return ans;
        
    }
};
