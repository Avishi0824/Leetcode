class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int mc = nums.size()/2;

        for(int n : nums){
            int c=0;
            for(int e:nums){
                if(e == n){
                    c+=1;
                }
                if(c>mc){
                    return n;
                }
            }
        }
    return -1;
    }
};