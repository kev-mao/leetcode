class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom, vector<int>& moveTo) {
        set<int> m;
        for(int i=0; i < nums.size(); i++){
            m.insert(nums[i]);
        }

        for(int i = 0; i < moveFrom.size(); i++){
            m.erase(moveFrom[i]);
            m.insert(moveTo[i]);
        }

        vector<int> ans;
        for(auto i : m){
            ans.push_back(i);
        }   
        return ans;
    }
};