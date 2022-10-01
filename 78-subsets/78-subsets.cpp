class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        ans.push_back({});
        for(int i = 0; i<nums.size();i++){
          int s = ans.size();
            for(int j = 0; j<s; j++ ){
               
                vector<int> v = ans[j];
                v.push_back(nums[i]);
                ans.push_back(v);
             
            }
           
             
        }
        return ans;
    }
};