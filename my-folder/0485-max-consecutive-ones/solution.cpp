class Solution{
public:
	int findMaxConsecutiveOnes(vector<int>& nums){
		int ans = 0, count = 0;
		int size = nums.size();
		for(int i = 0; i < size; i++){

			if(nums[i] == 1){
				count++;
				if(ans < count){
					ans = count;
				}
			} else {
				count = 0;
			}
		}
		return ans;
	}
};
