#include<climits>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        
        int gmax = INT_MIN;
        int sum = 0;
        for(int i = 0; i<nums.size();i++){
            sum += nums[i];
            gmax = max(gmax,sum);
            if(sum<0){
                sum = 0;
            }
                
        }
        return gmax;
    }
};