#include <unordered_set>
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        unordered_set<int> map;
        int size = nums.size();
        
        for(int i = 0; i < size; i++){
            map.insert(nums[i]);
        }

        for(int i = 1; i < size + 1; i++){
            if (map.count(i) == 0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
