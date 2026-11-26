class Solution {
public:
    int removeDuplicates(vector<int>& nums) {     
        int size = nums.size();
        if (size < 2) return size;
        int write = 1;
        for(int read = 1; read < size; read++){
            if (nums[write - 1] != nums[read]){
                nums[write] = nums[read];
                ++write;
            } 
        }
        return write;
    }
};
