class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> map;
        int size = nums.size();
        for(int i = 0; i < size; i++){
            map.insert({nums[i], i});
        }

        for(int i = 0; i < size; i++){
            int complement = target - nums[i];
            if((map.find(complement) != map.end()) && (map[complement] != i)){
                return {i, map[complement]};
            }
        }

        return {0, 0};


    }
};
