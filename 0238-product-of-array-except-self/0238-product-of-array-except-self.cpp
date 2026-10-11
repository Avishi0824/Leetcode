class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> left_product(n, 1);
        vector<int> right_product(n, 1);
        vector<int> answer(n);

        // Fill left products: left_product[i] contains product of elements to the left of i
        for (int i = 1; i < n; ++i) {
            left_product[i] = left_product[i - 1] * nums[i - 1];
        }

        // Fill right products: right_product[i] contains product of elements to the right of i
        for (int i = n - 2; i >= 0; --i) {
            right_product[i] = right_product[i + 1] * nums[i + 1];
        }

        // Combine left and right products
        for (int i = 0; i < n; ++i) {
            answer[i] = left_product[i] * right_product[i];
        }

        return answer;
    }
};