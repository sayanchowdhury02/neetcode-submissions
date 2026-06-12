class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=s.length();
        int arr[128]={0};

        int i=0,j=0,count=0,m=0;

        while(j<l)
        {
            arr[s[j]]++;
            if(arr[s[j]]>1)
            {
                count=0;
                m=max(m,count);
                while(arr[s[j]]>1)
                {
                    arr[s[i]]--;
                    i++;
                }
            }
            else
            {
                count=j-i+1;
                cout<<count;
                m=max(m,count);
            }
            j++;
        }
        return m;

        
    }
};
