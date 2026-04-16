class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int n = arr.size();
        int right  = n-2;
        int left = 1;
        int mid = 0;
        while(left <= right){
            mid = left + (right - left)/2;
            if(arr[mid] > arr[mid-1] &&  arr[mid] >arr[mid+1]){
                break;
            }
            else if(arr[mid+1] > arr[mid]){
                left = mid +1;
            }
            else{
                right = mid - 1;
            }
        }
        return mid;
    }
};