class Solution {
public:
       string longestCommonPrefix(vector<string>& strs) {
        string s1,s2,ans;
        sort(strs.begin(),strs.end());
        s1=strs[0];
        s2=strs[strs.size()-1];
        ans="";
        for(int i=0;i<s1.size();i++){
            if(s1[i]==s2[i]){
                ans+=s1[i];
            }
            else
                return ans;
        }
        return ans;
    }
};