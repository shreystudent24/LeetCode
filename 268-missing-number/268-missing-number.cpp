class Solution {
public:
    
    int missingNumber(vector<int>& nums) {
        int n = nums.size()+1;
        int sum = 0;
        for(int i = 0; i<nums.size();i++){
            sum += nums[i];
        }
        int supSum = (n*(n-1))/2;
        if(supSum == sum){
            return 0;
        }
        else{
            return (supSum - sum);
        }
    }
};