class Solution{
public:
	vector<int> shuffle(vector<int>& nums, int n){
	int size = nums.size();
	int mid_point = size / 2;
		vector<int> ans;
		for(int i = 0; i < mid_point; i++){
			ans.push_back(nums[i]);
			ans.push_back(nums[mid_point + i]);
		}
        return ans;
	}
};
