//#include<maps>
class Solution {

    public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>map;
        for(auto x: nums){
            map[x]++;
            if(map[x]>nums.size()/2){
                return x;
            }
        }
        return 0;
        
    }
};