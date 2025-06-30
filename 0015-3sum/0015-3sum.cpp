class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        std::vector<vector<int>> result;
        // when the smallest one is lager than 0, then no result
        if (nums[0] > 0) {
            return result;
        }
        int n = nums.size();
        for (int i = 0; i < nums.size() - 1; ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            int l = i + 1;
            int r = n - 1;
            
            while (l < r) {
                int test_sum = nums[i] + nums[l] + nums[r];
                if (test_sum == 0) {
                    result.push_back({nums[i], nums[l], nums[r]});
                    while (l < r && nums[l] == nums[l + 1]) {
                        l++;
                    }
                    while(l < r && nums[r] == nums[r - 1]) {
                        r--;
                    }
                    l++;
                    r--;
                } else if (test_sum < 0) {
                    l++;
                } else {
                    r--;
                }
            }
        }
        return result;
    }
};