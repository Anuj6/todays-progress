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
        // sort(nums.begin(), nums.end());
        // // product can be positive, zero, negative == max(smallest 2 * largest no.,  largest 3)
        // int n = size(nums);
        // return max(nums[0]*nums[1]*nums[n-1], nums[n-1]*nums[n-2]*nums[n-3]);
        
// 3. one pass optimal solution 
        int max1 = INT_MIN; int max2 = INT_MIN; int max3 = INT_MIN;
        int min1 = INT_MAX; int min2 = INT_MAX;
        
        for(int i = 0; i<size(nums); i++){
            if(nums[i] > max1){
                max3 = max2;
                max2 = max1;
                max1 = nums[i];
            }else if(nums[i] > max2){
                max3 = max2;
                max2 = nums[i];
            }else if(nums[i] > max3){
                max3 = nums[i];
            }
            
            if(nums[i] < min1){
                min2 = min1;
                min1 = nums[i];
            }else if(nums[i]<min2){
                min2 = nums[i];
            }
            
        }
        
        return max(min1*min2*max1, max1*max2*max3);
    }
};