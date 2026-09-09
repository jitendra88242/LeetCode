class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expectedSum=n*(n+1)/2;
        int Sum=0;
        for(int i=0;i<n;i++){
             Sum+=nums[i];
        }

        return expectedSum-Sum;
        
    }
};