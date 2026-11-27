class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int size = nums.size(); 
        int dup = 0, missing = 0;
        for (int i = 1; i < size + 1; i++){
            if (count(nums.begin(), nums.end(), i) == 0){
                missing = i;
            }else if (count(nums.begin(), nums.end(), i) == 2){
                dup = i;
            }
        }
        return {dup, missing};
    }
};
