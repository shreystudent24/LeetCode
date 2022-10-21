class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        
        
        reverse(nums.begin(),nums.end()); //Reverse Full Array
        reverse(nums.begin(), nums.begin()+k); //Reverse first part
        reverse(nums.begin()+k, nums.end()); //Reverse Second part
    }
};