class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {

        long long sum1 = 0;
        int numzeros1 = 0;
        for(int i = 0; i < nums1.size(); i++){
            if(nums1[i] == 0){
                numzeros1++;
                nums1[i] = 1;
            }
            sum1 += nums1[i];
        }
        long long sum2 = 0;
        int numzeros2 = 0;
        for(int i = 0; i < nums2.size(); i++){
            if(nums2[i] == 0){
                numzeros2++;
                nums2[i] = 1;
            }
            sum2 += nums2[i];
        }
        if(((numzeros1==0) && (sum1 < sum2)) || ((numzeros2==0) && (sum2 < sum1))){
            return -1;
        }
        return max(sum1, sum2);
    }
};