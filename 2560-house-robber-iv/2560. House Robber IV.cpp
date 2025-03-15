class Solution {
public:
    bool canStealK(vector<int>& nums, int k, int c){
        int i = 0;
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] <= c){
                count++;
                i++;
            } 
        }
        return count >= k;
    }
    int minCapability(vector<int>& nums, int k) {
        int left = *min_element(nums.begin(), nums.end());
        int right = *max_element(nums.begin(), nums.end());
        while(left < right){
            int mid = (right + left)/2;
            if(canStealK(nums, k, mid)){
                right = mid;
            } else{
                left = mid + 1;
            }
        }
        return left;

    }
};