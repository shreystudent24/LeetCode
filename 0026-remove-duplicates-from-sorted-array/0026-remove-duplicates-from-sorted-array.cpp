class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //Two Pointer Approach 
        if(nums.size() == 0) return 0;  //Base Case
         int left = 0;  //Left Pointer
        for(int right =1 /* Right Pointer*/; right< nums.size(); right++){
           
            if(nums[left] != nums[right]){
               left++;
           }
            
               nums[left] = nums[right];
           }
             return left+1;
    }
};