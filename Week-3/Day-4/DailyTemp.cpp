class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack <int> st;
        vector <int> ans(temperature.size(),0);
        for(int i =0 ;i<temperatures.size();i++)
        {
            while(!st.empty() && temperatures[i] > temperatures[st.top()])
            {
                int idx=st.top();
                ans[idx]=i-idx;
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};