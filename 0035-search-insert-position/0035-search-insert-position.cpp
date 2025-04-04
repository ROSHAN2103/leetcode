class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size(); 
        int mid;
        
        while (low < high) {
            mid = (low + high) / 2;
            
            if (nums[mid] == target) {
                return mid;
            } 
            else if (nums[mid] < target) {
                low = mid + 1;
            } 
            else {
                high = mid;
            }
        }
        
        return low; 
    }
};
