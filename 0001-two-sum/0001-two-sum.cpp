class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for (int i = 0; i < nums.size(); i++) {

            for (int j = i + 1; j < nums.size(); j++) {

                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }

            }

        }

        return {};
    }
};

/*class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // HashMap: stores number -> index
        unordered_map<int, int> mp;

        // Traverse through the array
        for (int i = 0; i < nums.size(); i++) {
            
            // Find the number required to make the target
            int needed = target - nums[i];

            // Check if the required number already exists in the HashMap
            if (mp.find(needed) != mp.end()) {
                
                // If found, return its index and current index
                return {mp[needed], i};
            }

            // Store current number and its index in the HashMap
            mp[nums[i]] = i;
        }

        // No valid pair found
        return {};
    }
};*/