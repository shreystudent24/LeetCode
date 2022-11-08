class Solution {
    unordered_map<int,int>mp;
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       
        for(int i = 0; i<nums.size();i++){
            mp[nums[i]]++;
            //All elements stored in map. 
            //Map[element] = frequency
        }
        
        //Priority Queue, Frequncy and element
        //This will sort element according to frequency
        priority_queue<pair<int,int>>pq;
        
        
        //pushing all key value pairs of map into priority queue
        //This will sort all the elements according to their frequency
        
        for(auto &it:mp){
            pq.push({it.second, it.first});
            
        }
        
        
        vector<int>ans; //Ans
        
        for(int i = 0; i<k; i++){
            ans.push_back(pq.top().second);
            //Storing all the second part of the priority queue which is element.  
            pq.pop();
        }
        
        return ans;
        
    }
};