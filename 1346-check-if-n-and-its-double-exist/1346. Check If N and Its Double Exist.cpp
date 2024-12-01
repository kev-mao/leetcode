class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int> count;
        for(int i = 0; i < arr.size(); i++){
            int complement = 2*arr[i];
            if(count.contains(complement) || (count.contains(arr[i]/2) && arr[i] %2==0)){
                return true;
            }
            count[arr[i]]++;
        }
        return false;
    }
};