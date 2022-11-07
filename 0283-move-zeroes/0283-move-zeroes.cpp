class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        /*One Liner Used Stable Parition of STL! 
       stable_partition(rbegin(nums),rend(nums),logical_not<int>());
       */
        
        //Another Solution without STL.
        for(int lastNonZero = 0, curr = 0; curr<nums.size();curr++){
            if(nums[curr] != 0){
                swap(nums[lastNonZero++],nums[curr]);
            }
        }
    }
};