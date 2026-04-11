class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string prefix = s[0];
        for(int i = 1; i < s.size(); i++)
        {
            while(s[i].find(prefix)!= 0)
            {
                prefix = prefix.substr(0,prefix.length() - 1);
                if(prefix == "")
                return "";
            }
        }
        return prefix;
    }
};