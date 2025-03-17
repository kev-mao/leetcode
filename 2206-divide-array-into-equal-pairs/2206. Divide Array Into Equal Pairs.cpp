class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_set<int> s;
        for(int num: nums){
            if(s.contains(num)){
                s.erase(num);
            } else{
                s.insert(num);
            }
        }
        return s.empty();
    }
};