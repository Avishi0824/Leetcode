class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        for (int i = 0; i < flowerbed.size(); i++) {

            // Check if current plot is empty
            if (flowerbed[i] == 0) {

                // Check left side
                bool leftEmpty = (i == 0 || flowerbed[i - 1] == 0);

                // Check right side
                bool rightEmpty = (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0);

                // If both sides are empty, plant flower
                if (leftEmpty && rightEmpty) {
                    flowerbed[i] = 1;
                    n--;

                    // If we have planted all required flowers
                    if (n == 0) {
                        return true;
                    }
                }
            }
        }

        return n <= 0;
    }
};