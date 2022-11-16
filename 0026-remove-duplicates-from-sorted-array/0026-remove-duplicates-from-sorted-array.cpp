class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //Two Pointer Approach 
        if(nums.size() == 0) return 0;  //Base Case
         int left = 0;  //Left Pointer
        for(int right =1; right< nums.size(); right++){ //right = right pointer
            //if nums are not equal
            if(nums[left] != nums[right]){
               left++;
           }
            
            //If nums are equal
             nums[left] = nums[right];
             }
        
        return left+1;
    }
};