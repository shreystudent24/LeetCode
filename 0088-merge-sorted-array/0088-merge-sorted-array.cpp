class Solution {
public:
    
    //vector mergeSort()
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       //nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        int j = 0;
        for(int i = m; i<(m+n);i++){
            nums1[i]=nums2[j++];
        }
        
       sort(nums1.begin(),nums1.end());
    }
};