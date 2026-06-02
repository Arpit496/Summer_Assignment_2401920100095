class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxSum= INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            maxSum=max(sum,maxSum);// if block should be after this as  an array with only one element like -1 will return 0 as answer in that case.
            if(sum<0){
                sum=0;
            }
        }
        return maxSum;
        
    }
};