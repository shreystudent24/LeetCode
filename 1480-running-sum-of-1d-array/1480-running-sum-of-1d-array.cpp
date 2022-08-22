class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
     int last = nums.size();
        vector<int> ans;
        ans.push_back(nums[0]);
        int sum = nums[0];
        for(int i = 1; i<last; i++){
            sum=sum+nums[i];
            ans.push_back(sum);
        }
        return ans;
    }
};