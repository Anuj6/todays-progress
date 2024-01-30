class Solution {
public:
    int maximumProduct(vector<int>& nums) {
// 1. Brute force with 3 loops
//         int ans = nums[0]*nums[1]*nums[2];
//         for(int i = 0; i<nums.size(); i++){
//             for(int j = i+1; j<nums.size(); j++){
//                 for(int k = j+1; k<nums.size(); k++){
//                     ans = max(ans, nums[i]*nums[j]*nums[k]);
//                 }
//             }
//         }
//         return ans;
        
// 2. with sorting 
        sort(nums.begin(), nums.end());
        // product can be positive, zero, negative == max(smallest 2 * largest no.,  largest 3)
        int n = size(nums);
        return max(nums[0]*nums[1]*nums[n-1], nums[n-1]*nums[n-2]*nums[n-3]);
    }
};