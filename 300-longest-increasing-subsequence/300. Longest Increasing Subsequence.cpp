class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> stack;
        for(int i = 0; i < nums.size(); i++){
            int current = nums[i];
            if (stack.empty() || current > stack.back()){
                stack.push_back(current);
            }
            else {
                int left = 0;
                int right = stack.size()-1;
                while(left < right){
                    int mid = (left+right)/2;
                    if(current > stack[mid]){
                        left = mid+1;
                    } else{
                        right = mid;
                    }
                }
                stack[left] = current;
            }
        }
        return stack.size();
        
    }
};