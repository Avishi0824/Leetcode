class Solution {
public:
    string reverseVowels(string s) {

        int left = 0;
        int right = s.length() - 1;

        string vowels = "aeiouAEIOU";

        while (left < right) {

            // Move left until we find a vowel
            while (left < right && vowels.find(s[left]) == string::npos) {
                left++;
            }

            // Move right until we find a vowel
            while (left < right && vowels.find(s[right]) == string::npos) {
                right--;
            }

            // Swap the vowels
            swap(s[left], s[right]);

            left++;
            right--;
        }

        return s;
    }
};