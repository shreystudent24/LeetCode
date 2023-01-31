class Solution {
public:
    vector<vector<int>> ans; //Declare Globally
    
    
    //Helper Function
    void help(vector<int>&nums, int start, int end){
        if(start == end){
            ans.push_back(nums);
            return;
        }
        
        for(int j = start; j<=end; j++){
            swap(nums[start], nums[j]);
            help(nums, start+1, end);
            swap(nums[start], nums[j]);
                
        }
    }
    
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        help(nums, 0, nums.size()-1);
        return ans;
        
    }
};