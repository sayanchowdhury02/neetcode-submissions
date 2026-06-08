class Solution {
public:
    bool isAnagram(string s, string t) {
        char arr[26]={0};
        for(auto a:s)
        {
            arr[a-'a']++;
        }
        for(auto a:t)
        {
            arr[a-'a']--;
            
        }
        for(auto c:arr)
        {
            if(c!=0) return false;

        }
        return true;

        

    }
};
