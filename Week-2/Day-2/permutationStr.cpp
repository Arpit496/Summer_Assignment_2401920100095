class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector <int> cnt1(26,0);
        vector <int> cnt2(26,0);
        if(s1.length()>s2.length())
        return false;
        for(char ch: s1)
        {
            cnt1[ch-'a']++;
        }
        int substr=s1.size();
        for(int i=0;i<substr;i++)
        {
            cnt2[s2[i]-'a']++;
        }
        if(cnt1==cnt2) return true;
        for(int i=substr;i<s2.size();i++)
        {
            cnt2[s2[i]-'a']++;
            cnt2[s2[i-substr]-'a']--;
            if(cnt1==cnt2) return true;
        }
        return false;
        
    }
};