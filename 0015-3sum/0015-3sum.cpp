class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        unordered_map<int,int>Map;
     
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i<nums.size(); ++i){
            //Saving the indexes in Map 
            Map[nums[i]]=i;
        }
        
        for(int i = 0; i<nums.size()-2; ++i){
            //I Number Fixed
            
            if(nums[i]>0)break;
            for(int j = i+1; j<nums.size()-1; ++j){
                //II Number Fixed
                
                int required = -1*(nums[i] + nums[j]);
                if(Map.find(required)!=Map.end() && Map[required] > j){
                    ans.push_back({nums[i],nums[j],required});
                }
                j = Map.find(nums[j])->second;
                
            }
            i = Map.find(nums[i])->second;
        }
        return ans;
    }
};