class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        if(arr.size() < 3) return false;
        int count = 0;
        for(int num : arr){
            if(num % 2 == 0) count = 0;
            count += (num % 2);
            if(count == 3) return true;
        }
        return false;
    }
};