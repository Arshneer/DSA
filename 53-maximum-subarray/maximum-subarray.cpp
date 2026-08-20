class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];       
        int currentSum = nums[0];   

        for (int i = 1; i < nums.size(); i++) {
            int a =nums[i];
            int b =currentSum +  nums[i];
            currentSum = max(a,b);
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};