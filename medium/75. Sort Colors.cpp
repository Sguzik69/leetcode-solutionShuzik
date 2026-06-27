class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;          // граница для 0
        int mid = 0;          // текущий элемент
        int high = nums.size() - 1;  // граница для 2

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1) {
                mid++;
            }
            else { // nums[mid] == 2
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};