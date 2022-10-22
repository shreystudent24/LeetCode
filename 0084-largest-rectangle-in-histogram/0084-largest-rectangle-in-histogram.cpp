class Solution {
private:
    //Make here two functions, 
    vector<int> nextsmaller(vector<int>arr){
        stack<int>s;
        vector<int>ans(arr.size());
        s.push(-1);
        
        for(int i = arr.size()-1; i>=0; i--){
            int curr = arr[i];
            while(s.top()!= -1 && arr[s.top()]>=curr){
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
            
        }
        return ans;    
    }
    
       vector<int> prevsmaller(vector<int>arr){
        stack<int>s;
        vector<int>ans(arr.size());
        s.push(-1);
        
        for(int i = 0; i<arr.size(); i++){
            int curr = arr[i];
            while(s.top()!= -1 && arr[s.top()]>=curr){
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
            
        }
        return ans;    
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int>next(n);
        next = nextsmaller(heights);
        
        vector<int>prev(n);
        prev = prevsmaller(heights);
        
        int ans = INT_MIN;
        for(int i = 0; i<n; i++){
            int l = heights[i];
            
            if(next[i]==-1){
                next[i]=n;
            }
            int width = next[i] - prev[i] -1;
            
            int area = l*width;
            ans = max(ans, area);
            
        }
        return ans; 
    }
   
};