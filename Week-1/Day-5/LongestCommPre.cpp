class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        
        sort(strs.begin(),strs.end());
        string s1=strs[0];
        string s2=strs[strs.size()-1];
        string res="";
        int minlength=min(s1.length(),s2.length());
        
        for(int i=0;i<minlength;i++)
        {
            if(s1[i]!=s2[i]) break;
            res+=s1[i];

        }
        return res;
        
    }
};