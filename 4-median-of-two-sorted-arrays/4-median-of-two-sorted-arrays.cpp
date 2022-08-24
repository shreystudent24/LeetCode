class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans; //1.Create another array
        
        //2. Merge given two arrays in a new array
        ans.insert(ans.begin(),nums1.begin(),nums1.end());
        ans.insert(ans.end(),nums2.begin(),nums2.end());
        
        
        sort(ans.begin(),ans.end());
        
        double a = 0.0;
        int mid = ans.size()/2;
        
        if(ans.size()%2==0){
            a = (ans[mid]+ans[mid-1])/2.0;
            return a;
        }
        else{
            return ans[mid];
        }
        
        
    }
};