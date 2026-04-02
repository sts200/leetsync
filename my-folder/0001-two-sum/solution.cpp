class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int numsLen = nums.size();
        for(int i = 0; i < numsLen; i++){
            cout << numsLen << endl;
            // cout << i << endl;
            for(int j = 0; j < numsLen; j++){
                // cout << j << endl;
                if(i != j && nums[i] + nums[j] == target){
                    return {i, j};
                }
            }
        }
        return {0, 0};
    }
};
