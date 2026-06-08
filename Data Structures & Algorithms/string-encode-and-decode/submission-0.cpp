class Solution {
public:

    string encode(vector<string>& strs) {
        string enc="";
        for(auto &s:strs)
        {
            string s2="";
            for(char ch:s)
            {
                ch=ch+7;
                s2+=ch;
            }
            s2=s2+"#";
            enc+=s2;
        }
        return enc;

    }

    vector<string> decode(string s) {
string s1="";
vector<string>ans;
        for(char ch:s)
        {
            
            if(ch=='#')
            {
                ans.push_back(s1);
                s1="";
            }
            else
            {
                ch=ch-7;
                s1+=ch;
            }
        }
        return ans;

    }
};
