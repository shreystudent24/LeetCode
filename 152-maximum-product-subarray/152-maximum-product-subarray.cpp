class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxP = INT_MIN;
        int CurrP = 1;
        for(int i = 0; i<nums.size();i++){
            CurrP*=nums[i];
            maxP = max(maxP,CurrP);
            if(CurrP == 0){
                CurrP = 1;
            }
        }
        
        CurrP = 1;
        for(int i = nums.size()-1; i>=0;i--){
            CurrP*=nums[i];
            maxP = max(maxP,CurrP);
            if(CurrP == 0){
                CurrP = 1;
            }
        }
        
        return maxP;
    }
};