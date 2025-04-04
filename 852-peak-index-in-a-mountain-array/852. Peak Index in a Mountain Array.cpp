class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 0;
        int right = arr.size()-1;
        while(left <= right){
            int mid = right + (left-right)/2;
            if((arr[mid] > arr[mid-1]) && arr[mid] > arr[mid+1]){
                return mid;
            }
            if(arr[mid] > arr[mid+1]){
                right = mid - 1;
            } else{
                left = mid + 1;
            }
        }
        return -1;
    }
};