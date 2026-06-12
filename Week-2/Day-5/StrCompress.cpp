class Solution {
public:
    int compress(vector<char>& chars) {
        int left = 0;
        int right =0;
        int write =0;
        while( left< chars.size())
        {
            int count =0;
            while( right <chars.size() && chars[right]== chars[left])
            {
                count++;
                right++;
            }
            
            chars[write]=chars[left];
            write++;
            if(count > 1)
            {
                string temp=to_string(count);
                
            
                for(int i=0;i<temp.size();i++)
                {
                    chars[write]=temp[i];
                    write++;
                }
            }
            left=right;
        }
        return write;
    }
};