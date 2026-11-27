class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int write = 0;
        int size = nums.size();
        for (int read = 0; read < size; read++){
            if (nums[read] != val){
                nums[write++] = nums[read];
            }
        }
        return write;
    }
};
