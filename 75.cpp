// 75. Sort Colors

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;

        int pointer = low;
        while(pointer <= high){
            if(nums[pointer] == 0){
                swap(nums[pointer], nums[low]);
                low++;
                pointer++;
            } else if(nums[pointer] == 2){
                swap(nums[pointer], nums[high]);
                high--;
            } else{
                pointer++;
            }
        }
    }
};