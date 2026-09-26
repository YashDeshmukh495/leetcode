class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>result(n);
        int left=0;
        int right=n-1;
        int ans=n-1;
        while(left<=right){
            int leftqr=nums[left]*nums[left];
            int rightqr=nums[right]*nums[right];
            if(leftqr>rightqr){
                result[ans]=leftqr;
                left++;

            }
            else{
                result[ans]=rightqr;
                right--;

            }
            ans--;

        }
        return result;
        
    }
};
// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ans(n);

//         int left = 0;
//         int right = n - 1;
//         int pos = n - 1;

//         while (left <= right) {
//             if (abs(nums[left]) > abs(nums[right])) {
//                 ans[pos] = nums[left] * nums[left];
//                 left++;
//             } else {
//                 ans[pos] = nums[right] * nums[right];
//                 right--;
//             }
//             pos--;
//         }

//         return ans;
//     }
// };
