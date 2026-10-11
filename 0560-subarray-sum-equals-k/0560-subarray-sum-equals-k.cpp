class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefix_counts;
        prefix_counts[0] = 1;
        int current_sum = 0;
        int count = 0;
        
        for (int num : nums) {
            current_sum = current_sum + num;
            
            // Check if (current_sum - k) exists in the map
            if (prefix_counts.find(current_sum - k) != prefix_counts.end()) {
                count += prefix_counts[current_sum - k];
            }
            
            // Store / update the count of current_sum
            prefix_counts[current_sum]++;
        }
        
        return count;
    }
};