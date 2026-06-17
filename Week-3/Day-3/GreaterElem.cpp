class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack <int> st;
        unordered_map<int,int> mpp;
        vector <int> ans;
        for(int i=0;i<nums2.size();i++)
        {
            if(st.empty())
            {
                st.push(nums2[i]);
                continue;
            }
            while(!st.empty() && nums2[i]>st.top())
            {
                mpp[st.top()]=nums2[i];
                st.pop(); 
            }
            st.push(nums2[i]);
            

        }
        while(!st.empty())
        {
            mpp[st.top()]=-1;
            st.pop();
        }
        for(int i =0;i< nums1.size();i++)
        {
            ans.push_back(mpp[nums1[i]]);

        }
        return ans;
    }
};