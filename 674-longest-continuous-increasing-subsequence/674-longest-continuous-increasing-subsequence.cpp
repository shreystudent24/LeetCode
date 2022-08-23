class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int a = 1;
        int count =1; 
        for(int i = 0; i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                count ++;
                a = max(a,count);
            }
            else if(nums[i]>=nums[i+1]){
                count = 1;
            }
        }
        return a;
    }
};