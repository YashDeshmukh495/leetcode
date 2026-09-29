class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
           ans.insert(ans.end(), nums1.begin(), nums1.end());
           ans.insert(ans.end(), nums2.begin(), nums2.end());
           sort(ans.begin(),ans.end());
           int n=ans.size();
           //odd which is not divide in 2
           if(n%2==1){
            return ans[n/2];
           }
           //even
           else{
            return (ans[n/2]+ans[n/2-1])/2.0;
           }
        
        
    }
};