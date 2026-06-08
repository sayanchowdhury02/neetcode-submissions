class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>q;

        unordered_map<int,int>m;
       vector<pair<int,int>>m1;
        for(auto it:nums)
        {
            m[it]++;

            
        }
for(auto &it:m)      
{
    q.push({it.second,it.first});
}
vector<int>ans;
        while(k--)
        {
            auto a=q.top();
            q.pop();
            ans.push_back(a.second);
        }
        return ans;

        
    }
};
