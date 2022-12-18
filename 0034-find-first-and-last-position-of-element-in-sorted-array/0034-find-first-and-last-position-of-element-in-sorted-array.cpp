class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       // vector<int>ans;
        int first = -1;
        int second = -1;
        int lo= 0;
        int hi = nums.size()-1;
        
        //Binary Search to find first element
        while(lo <= hi){
            int mid = lo + (hi - lo)/2;
            
            
            if(nums[mid]>=target){
                hi = mid -1;
            }
            else{
                lo = mid + 1;
            }
            
            if(nums[mid]==target){
                first = mid;
                
            }
        }
        
        if(first == -1){
            return {-1,-1};
        }
        
        
        lo =0; hi = nums.size()-1;
          while(lo <= hi){
            int mid = lo + (hi - lo)/2;
            
           
            if(nums[mid]<=target){
                lo = mid + 1;
                
            }
            else{
                hi = mid -1;
            }
               if(nums[mid]==target){
                second = mid;
                
            }
        }
        
        return {first,second};
        
        
    }
};