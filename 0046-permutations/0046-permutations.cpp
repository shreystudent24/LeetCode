class Solution {
public:
    vector<vector<int>> ans;
    
    void help(vector<int>&nums, int st, int end){
       
        //Base Case
        if(st==end){
            ans.push_back(nums);
            return;
        }
        
        for(int j = st; j<=end; j++){
            swap(nums[st],nums[j]);
            help(nums,st+1,end);
            swap(nums[st],nums[j]);
            
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        help(nums,0,nums.size()-1);
        return ans;
    }
};