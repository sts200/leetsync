class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target){
		int size = nums.size(); 
		for (int i = 0; i < size; i++){
			int i_num = nums[i];
			for (int j = 0; j < size; j++){
				if(i_num + nums[j] == target && i != j){
					return {i, j};
				}
			}	
		}
		return {0, 0};
	}
};
