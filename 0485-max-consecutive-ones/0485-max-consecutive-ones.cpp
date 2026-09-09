class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int currentCount = 0;
        int maximumCount = 0;

        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] == 1) {
                currentCount++;
                maximumCount = max(maximumCount, currentCount);
            }
            else {
                currentCount = 0;
            }
        }

        return maximumCount;
    }
};