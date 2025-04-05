class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> used(nums.size(), 0);
        vector<int> stack;
        vector<vector<int>> ans;
        backtrack(nums, used, stack, ans);
        return ans;
    }

    void backtrack(vector<int>& nums, vector<bool>& used, vector<int>& stack, vector<vector<int>>& ans){
        if(stack.size() == nums.size()){
            ans.push_back(stack);
            return;
        }
        for(int i = 0; i < nums.size(); i++){
            if(!used[i]){
                stack.push_back(nums[i]);
                used[i] = true;
                backtrack(nums, used, stack, ans);
                stack.pop_back();
                used[i] = false;
            }
        }
    }
};