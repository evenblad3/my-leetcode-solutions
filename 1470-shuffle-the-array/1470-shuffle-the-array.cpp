auto init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> vec(2 * n);
        
        for (int i = 0; i < n; ++i) {
            vec[2 * i] = nums[i];
            vec[2 * i + 1] = nums[i + n];
        }

        return vec;
    }
};