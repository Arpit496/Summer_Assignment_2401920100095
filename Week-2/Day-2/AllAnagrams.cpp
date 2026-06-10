class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> freqP(26,0);
        vector <int>ans;
        vector<int> freqS(26,0);
        if(p.length()>s.length()) return {};
        for(char ch : p)
        {
            freqP[ch-'a']++;
        }
        int k=p.length();
        for(int i=0;i<k;i++)
        {
            freqS[s[i]-'a']++;
        }
        if(freqS==freqP) ans.push_back(0);
        for(int i=k;i<s.length();i++)
        {
            freqS[s[i]-'a']++;
            freqS[s[i-k]-'a']--;
            if(freqP==freqS) ans.push_back(i-k+1);
        }
        return ans;

        
    }
};