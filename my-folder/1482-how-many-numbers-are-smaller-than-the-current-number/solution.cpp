class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int size = nums.size();
        
        for (int i = 0; i < size; i++){
            int num_smaller = 0;
            for (int j = 0; j < size; j++){
                if(nums[i] > nums[j]){
                    num_smaller++;
                } else {
                    num_smaller = num_smaller;
                } 
            }
            ans.push_back(num_smaller);
        }
        return ans;
    }
};
