class Solution {
public:
    int right(vector<int>&nums,int s){
        int ans = 0;
        for(int i = s; i<nums.size();i++){
            ans = ans+nums[i];
        }
        return ans;
    }
    
    int left(vector<int>& nums, int k){
        int ans = 0; 
        for(int i = 0; i<=k;i++){
            ans = ans+nums[i];
        }
        return ans;
    }
    int pivotIndex(vector<int>& nums) {
        int rs = right(nums,0);
        for(int i = 0; i<nums.size();i++){
           rs = rs-nums[i];
            int ls = left(nums,i-1);
                
            if(rs==ls){
                return i;
            }
        }
        return -1;
    }
};