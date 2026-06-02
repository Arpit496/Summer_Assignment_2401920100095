class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        for(int j=1;j<nums.size();j++)
        {
            if(nums[i]!=nums[j]) //if the element at index 0 and 1 are unique then replace element at index 1 by itself
            {
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1; // at last i will have the index of the last unique element
        
    }
};