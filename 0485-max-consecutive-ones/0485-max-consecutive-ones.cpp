class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_ones = 0;
        int current = 0;
        
        for (int num : nums) {
            current = (num == 1) ? current + 1 : 0;
            max_ones = max(max_ones, current);
        }

        return max_ones;
    }
};