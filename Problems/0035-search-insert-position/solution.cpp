class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int mid;
        int high = nums.size() - 1;
        while(low <= high){
            mid = low + (high - low) / 2;
            if(nums[mid] == target){
                return mid;
            } else if (nums[mid] < target){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        // when the element is not found, high will be just before low, and high will be the last value less than the target, therefore, the target would placed on space to the right of it, on low
        return low;
    }
};
