#include <vector>

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Phase 1: Detect intersection point using Floyd's Cycle Detection
        int slow = nums[0];
        int fast = nums[0];

        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        // Phase 2: Find the entry point of the cycle
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};