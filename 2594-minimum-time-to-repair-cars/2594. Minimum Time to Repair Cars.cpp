class Solution {
public:

    bool validTime(vector<int>& ranks, int cars, long long time){
        long long count = 0;
        for(int r : ranks){
            long long c2 = time / r;
            long long c = floor(sqrt(c2));
            count += c;
        }
        return count >= cars;
    }

    long long repairCars(vector<int>& ranks, int cars) {
        long long left = 1;
        long long right = 1e14;
        while(left < right){
            long long mid = (left + right) / 2;
            if(validTime(ranks, cars, mid)){
                right = mid;
            } else{
                left = mid + 1;
            }
        }
        return left;
    }
};