class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int left = 1;
        int right = 1;
        vector<int>ans; //Final Output array
        
        //O(1) Space Complexity 
        //O(n) Time Compexity
        
        //Pushing prefix sum in final output array
        for(int i = 0; i< nums.size();i++){
            ans.push_back(left);
            left = left*nums[i];
        }
        
        //Traverse the array in reverse direction. 
        for(int i = nums.size()-1; i > -1 ; i--){
            ans[i] = (right*ans[i]); //(Right Product * left Product)
            right *= nums[i];
        }
        
        return ans;
    }
};