class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        int ans=0,x=0,count=0;
         for(auto i:nums)
        {
            s.insert(i);
        }
        for(auto i:nums)
        {
          
            count=0;
            //check if beginning of sequence
            if(s.find(i-1)==s.end())//begin of sequence
            {
                 x=i,count=1;
                while(s.find(x+1)!=s.end())
                {
                    count++;
                    x++;
                }
            }
            ans=max(ans,count);

        }
        return ans;

        
    }
};
