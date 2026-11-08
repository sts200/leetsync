class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // each number added to each other one
        // don't double check
        // nested for loop
        // loop: vector.size()
        // read: vector[]
        // construct result std::vector<int> result;
        // letters.push_back("abc");

        // break; only exits one loop

        int len = nums.size();
        std::vector<int> result;
        for(int i = 0; i < len; i++){
            for(int j = i + 1; j < len; j++){
                int x = nums[i];
                int y = nums[j];
                if (x + y == target){
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result;
    }
};
