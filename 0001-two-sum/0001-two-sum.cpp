class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> num_map;
        std::vector<int> answer;
        for (std::size_t index = 0; index < nums.size(); ++index) {
            auto it = num_map.find(target - nums[index]);
            if ( it != num_map.end()) {
                return {static_cast<int>(index), it->second};
            }
            num_map[nums[index]] = index;
        }
        return {};
    }
};