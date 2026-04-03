class Solution {
private:
    void merge(vector<int>& nums, int low, int mid, int high, int& count) {
        int j = mid + 1;

        // Count reverse pairs
        for (int i = low; i <= mid; i++) {
            while (j <= high && nums[i] > 2LL * nums[j]) {
                j++;
            }
            count += (j - (mid + 1));
        }

        // Merge step
        vector<int> temp;
        int left = low, right = mid + 1;

        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left++]);
            } else {
                temp.push_back(nums[right++]);
            }
        }

        while (left <= mid) {
            temp.push_back(nums[left++]);
        }

        while (right <= high) {
            temp.push_back(nums[right++]);
        }

        // Copy back
        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }
    }

    void mergesort(vector<int>& nums, int low, int high, int& count) {
        if (low >= high) return;

        int mid = low + (high - low) / 2;

        mergesort(nums, low, mid, count);
        mergesort(nums, mid + 1, high, count);
        merge(nums, low, mid, high, count);
    }

public:
    int reversePairs(vector<int>& nums) {
        int count = 0;
        mergesort(nums, 0, nums.size() - 1, count);
        return count;
    }
};