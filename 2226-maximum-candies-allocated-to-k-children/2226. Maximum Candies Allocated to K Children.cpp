class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int left = 1;
        int right = *max_element(candies.begin(), candies.end());
        while(left <= right){
            int m = (left+right)/2;
            if(checkValid(candies, m , k)){
                left = m+1;
            } else{
                right = m-1;
            }
        }
        return right;
    }

    bool checkValid(vector<int> nums, int m, long long n){
        long long ans = 0;
        for(int i = 0; i < nums.size(); i++){
            ans += nums[i]/m;
        }
        return ans >= n;
    }
};