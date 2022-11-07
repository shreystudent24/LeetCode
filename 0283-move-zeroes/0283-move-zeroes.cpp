class Solution {
public:
    void moveZeroes(vector<int>& nums) {
            //Used Stable Parition of STL! 
         stable_partition(rbegin(nums),rend(nums),logical_not<int>());
    }
};