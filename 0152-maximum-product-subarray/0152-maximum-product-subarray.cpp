#include <vector>
#include <algorithm>

class Solution {
public:
    int maxProduct(std::vector<int>& nums) {
        int n = nums.size();
        double prefix = 1; // double prevents potential integer overflow during accumulation
        double suffix = 1;
        double max_prod = nums[0];

        for (int i = 0; i < n; ++i) {
            // Reset to 1 if previous product became 0
            if (prefix == 0) prefix = 1;
            if (suffix == 0) suffix = 1;

            prefix *= nums[i];
            suffix *= nums[n - 1 - i];

            max_prod = std::max({max_prod, prefix, suffix});
        }

        return static_cast<int>(max_prod);
    }
};